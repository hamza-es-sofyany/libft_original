/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:35:36 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/17 10:35:41 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	toutal;
	char	*str;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	toutal = nmemb * size;
	str = malloc(toutal);
	if (!str)
		return (NULL);
	i = 0;
	while (i < toutal)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
