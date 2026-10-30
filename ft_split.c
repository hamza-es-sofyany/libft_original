/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <hes-sofy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:34:56 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/30 10:39:42 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_word_dup(char const *s, char c, size_t *len)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	*len = i;
	str = malloc(*len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < *len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free_all(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	ft_fill_split(char **str, char const *s, char c, size_t to_len)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (i < to_len)
	{
		while (s[j] && s[j] == c)
			j++;
		str[i] = ft_word_dup(&s[j], c, &len);
		if (!str[i])
		{
			ft_free_all(str, i);
			return (0);
		}
		i++;
		j += len;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	to_len;

	if (!s)
		return (NULL);
	to_len = ft_count_words(s, c);
	str = malloc((to_len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[to_len] = NULL;
	if (!ft_fill_split(str, s, c, to_len))
		return (NULL);
	return (str);
}
