/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:55:14 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 18:17:06 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	len;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		return (len_src + size);
	i = 0;
	len = len_dst;
	while ((size - 1) > len_dst && src[i])
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (len_src + len);
}
