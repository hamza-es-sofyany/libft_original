#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_putendl(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    write(1,"\n",1);
}