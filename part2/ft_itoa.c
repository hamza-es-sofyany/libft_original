/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:43:13 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/20 12:55:14 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_nbr_str(int n, size_t len, long nb)
{
	char	*str;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (0 < len)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	char	*str;

	len = 0;
	nb = n;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	nb = n;
	if (nb < 0)
		nb *= -1;
	str = ft_nbr_str(n, len, nb);
	return (str);
}
