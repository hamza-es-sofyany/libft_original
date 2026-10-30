/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:12:03 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/30 09:38:58 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_sign(const char *s, int *i)
{
	int	sign;

	while (s[*i] == ' ' || (s[*i] >= 9 && s[*i] <= 13))
		(*i)++;
	sign = 1;
	if (s[*i] == '+' || s[*i] == '-')
	{
		if (s[*i] == '-')
			sign = -1;
		(*i)++;
	}
	return (sign);
}

static int	ft_signe(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int				i;
	int				sign;
	unsigned long	result;

	i = 0;
	result = 0;
	sign = ft_get_sign(nptr, &i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (result > 922337203685477580UL)
			return (ft_signe(sign));
		result = result * 10 + (nptr[i] - '0');
		if (sign == 1 && result > 9223372036854775807UL)
			return (-1);
		if (sign == -1 && result > 9223372036854775808UL)
			return (0);
		i++;
	}
	if (sign == -1)
		return ((int)(-result));
	return ((int)result);
}
