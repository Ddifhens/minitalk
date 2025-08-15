/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:12:29 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/20 00:24:10 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static	int	ft_checks(char s1, char const *set)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
		{
			t = 1;
			break ;
		}
		i++;
	}
	return (t);
}

static int	ft_front(char const *s1, char const *set)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (s1[i])
	{
		if (ft_checks(s1[i], set))
			start++;
		else
			break ;
		i++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		i;
	char	*str;
	int		end;

	end = 0;
	start = ft_front(s1, set);
	i = 0;
	i = (ft_strlen(s1) - 1);
	while (i > start)
	{
		if (ft_checks(s1[i], set))
			end++;
		else
			break ;
		i --;
	}
	str = (char *)malloc(ft_strlen(s1) - end - start + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, (ft_strlen(s1) - end - start + 1));
	return (str);
}
