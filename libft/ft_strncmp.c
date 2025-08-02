/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:02:47 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/15 17:25:27 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < (unsigned char)n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
