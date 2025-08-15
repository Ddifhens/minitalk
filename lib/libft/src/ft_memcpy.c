/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:46:27 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/14 16:44:16 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
