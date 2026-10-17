#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1);
}