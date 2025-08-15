/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:48:00 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/15 16:52:45 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*i;

	while (c > 255)
		c = (-256) + c;
	i = (unsigned char *)s;
	while (*i)
	{
		if (*i == (char)c)
			break ;
		i++;
	}
	if (*i == c)
		return ((char *)i);
	return (NULL);
}
