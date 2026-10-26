/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:26:40 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 16:26:43 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t				i;
	unsigned char		bt;
	const unsigned char	*ptr;

	i = 0;
	bt = c;
	ptr = (const unsigned char *)s;
	while (ptr[i])
	{
		if (ptr[i] == bt)
			return ((char *)&ptr[i]);
		i++;
	}
	if (bt == '\0')
		return ((char *)&ptr[i]);
	return (NULL);
}
