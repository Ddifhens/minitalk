/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:09:13 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/14 18:13:52 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if ((!dest && !src) || (!dest && !src && !n))
		return (0);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = n;
	if (dest > src)
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}
