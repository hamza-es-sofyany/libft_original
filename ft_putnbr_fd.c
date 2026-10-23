/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:20:50 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/20 14:23:38 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	size_t	i;
	char	str[12];

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
		str[i++] = nb % 10 + 48;
		nb /= 10;
	}
	while (i > 0)
		ft_putchar_fd(str[--i], fd);
}
