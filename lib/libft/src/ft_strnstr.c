/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:26:22 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/16 12:46:24 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			ii;
	unsigned char	*s1;
	unsigned char	*s2;

	if (ft_strlen(little) == 0 || !little)
		return ((char *)big);
	i = 0;
	ii = 0;
	s1 = (unsigned char *)big;
	s2 = (unsigned char *)little;
	while (big[i] && i < len)
	{
		while (s1[i + ii] == s2[ii] && s1[i + ii] && s2[ii])
		{
			if (!s2[ii + 1] && (ii + i) < len)
				return ((char *)&s1[i]);
			ii++;
		}
		ii = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char stack[]= "add abd abc abd";
	const char needle[]= "abc";
	size_t	len = 14;

	printf("%s",ft_strnstr(stack, needle, len));
}*/
