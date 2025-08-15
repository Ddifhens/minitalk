/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:49:27 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/15 15:32:34 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_d;
	size_t		len_s;
	size_t		offset;
	size_t		i;

	len_d = (ft_strlen(dst));
	len_s = (ft_strlen(src));
	offset = len_d;
	i = 0;
	if (size == 0 || len_d >= size)
		return (len_s + size);
	while (src[i])
	{
		dst[offset] = src[i];
		if (offset == size - 1)
		{
			break ;
		}
		i++;
		offset++;
	}
	dst[offset] = '\0';
	return (len_d + len_s);
}
