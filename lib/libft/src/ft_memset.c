/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student .42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:09:11 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/18 19:16:16 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	if (!s && (!c && n))
		return (NULL);
	while (n--)
		((unsigned char *)s)[n] = (unsigned char)c;
	return (s);
}
