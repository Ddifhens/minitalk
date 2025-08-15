/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:36:53 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/16 19:19:19 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*i;
	int				l;
	int				t;

	l = 0;
	t = 0;
	i = (unsigned char *)s;
	while (c > 255)
		c = (-256) + c;
	while (i[t])
	{
		if (i[t] == c)
			l = t;
		t++;
	}
	if (i[t] == c)
		return ((char *)i + t);
	if (i[l] == c)
		return ((char *)i + l);
	return (NULL);
}
