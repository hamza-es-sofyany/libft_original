/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:56:25 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 16:17:53 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ds;
	const char	*sr;
	size_t		i;

	ds = dest;
	sr = src;
	i = 0;
	if (ds > sr)
	{
		while (n > 0)
		{
			n--;
			ds[n] = sr[n];
		}
	}
	else
	{
		while (i < n)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (ds);
}
