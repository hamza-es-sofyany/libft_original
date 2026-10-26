/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:17:34 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 17:18:30 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (pt1[i] || pt2[i]))
	{
		if (pt1[i] > pt2[i])
			return (1);
		else if (pt1[i] < pt2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
