#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    long    nb;
    size_t  i;
    char    str[12];

    nb = n;
    if (nb == 0)
    {
        ft_putchar_fd('0', fd);
        return ;
    }
    if (nb < 0)
    {
        nb *= -1;
        ft_putchar_fd('-', fd);
    }
    i = 0;
    while (nb > 0)
    {
        str[i] = nb % 10 + 48;
        nb /= 10;
        i++;
    }

    while (i > 0)
    {
        i--;
        ft_putchar_fd(str[i], fd);
    }
}