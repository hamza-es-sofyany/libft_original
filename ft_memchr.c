/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:44:06 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 11:44:27 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		bt;
	size_t				i;

	ptr = s;
	bt = c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == bt)
		{
			return ((unsigned char *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
