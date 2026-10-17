/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:12:03 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 10:18:09 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sigen;
	int	result;

	i = 0;
	sigen = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if ((nptr[i] == '+' || nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sigen *= -1;
		i++;
	}
	if (nptr[i] >= '0' && nptr[i] <= '9')
	{
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = (result * 10) + (nptr[i] - 48);
			i++;
		}
	}
	return (result * sigen);
}
