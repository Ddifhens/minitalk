/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:05:42 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/24 21:12:01 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static	int	count_words(char const *s, char c)
{
	char	*b;
	int		words;

	words = 0;
	b = (char *)s;
	while (*b != 0)
	{
		while (*b == c && *b != 0)
			b++;
		if (*b)
			words++;
		while (*b != c && *b != 0)
		{
			b++;
		}
	}
	return (words);
}

static	int	next_word(char const *s, char c, int *current)
{
	while (s[*current] == c)
	{
		(*current)++;
		if (s[*current] != c)
			return (*current);
	}
	return (*current);
}

static int	get_len(char const *s, char c, int *current)
{
	int	x;

	x = 0;
	while (s[*current] != c && s[*current] != 0)
	{
		(*current)++;
		x++;
	}
	return (x);
}

static char	**free_all( char **save)
{
	char	**temp;

	temp = save;
	while (1)
	{
		if (!*save)
			break ;
		free(*save);
		save++;
	}
	free(temp);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	**save;
	int		wordcount;
	int		*current;
	int		i;

	i = 0;
	current = &i;
	wordcount = count_words(s, c);
	str = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	save = str;
	while (wordcount > 0)
	{
		*str = ft_substr(s, next_word(s, c, current), get_len(s, c, current));
		if (!*str)
			return (free_all(save));
		str++;
		wordcount--;
	}
	*str = NULL;
	return (save);
}
