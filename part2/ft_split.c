/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-sofy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:34:56 by hes-sofy          #+#    #+#             */
/*   Updated: 2026/10/20 14:34:58 by hes-sofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_word_dup(char const *s, size_t len)
{
	size_t	i;
	char	*str;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count = i;
			break ;
		}
		i++;
	}
	if (count != 0)
		return (count);
	return (i);
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

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	to_len;

	to_len = ft_count_words(s, c);
	str = malloc((to_len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[to_len] = NULL;
	i = 0;
	j = 0;
	while (i < to_len)
	{
		while (s[j] && s[j] == c)
			j++;
		len = ft_word_len(&s[j], c);
		str[i] = ft_word_dup(&s[j], len);
		if (!str[i])
		{
			ft_free_all(str, i);
			return (NULL);
		}
		i++;
		j += len;
	}
	return (str);
}