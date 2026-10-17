#include <unistd.h>
#include <stdio.h>
#include <string.h>
void    ft_putstr_fd(int fd, char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        write(fd,&str[i],1);
        i++;
    }
    
}