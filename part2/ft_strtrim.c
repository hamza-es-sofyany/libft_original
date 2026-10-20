/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:20:10 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/20 15:27:26 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_trim_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	fon;

	i = 0;
	while (s1[i])
	{
		j = 0;
		fon = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				fon = 1;
			j++;
		}
		if (fon == 0)
			break ;
		i++;
	}
	return (i);
}

size_t	ft_trim_end(char const *s1, char const *set, size_t start)
{
	size_t	i;
	size_t	j;
	size_t	fon;

	i = ft_strlen(s1);
	while (i > start)
	{
		j = 0;
		fon = 0;
		while (set[j])
		{
			if (s1[i - 1] == set[j])
				fon = 1;
			j++;
		}
		if (fon == 0)
			break ;
		i--;
	}
	return (i);
}

char	*ft_copy_range(char const *s, size_t from, size_t to)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = to - from + 1;
	str = malloc(len);
	if (!str)
		return (NULL);
	i = 0;
	while (from < to)
	{
		str[i] = s[from];
		i++;
		from++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = ft_trim_start(s1, set);
	end = ft_trim_end(s1, set, start);
	str = ft_copy_range(s1, start, end);
	return (str);
}
