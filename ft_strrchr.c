/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:55:44 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 17:55:46 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				i;
	size_t				last;
	unsigned char		bt;
	const unsigned char	*ptr;

	i = 0;
	bt = c;
	last = 0;
	ptr = (const unsigned char *)s;
	while (ptr[i])
	{
		if (ptr[i] == bt)
			last = i + 1;
		i++;
	}
	if (bt == '\0')
		return ((char *)&ptr[i]);
	if (last > 0)
		return ((char *)&ptr[last - 1]);
	return (NULL);
}
