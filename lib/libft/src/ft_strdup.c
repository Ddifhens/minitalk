/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:18:24 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/16 17:46:23 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	(void)ft_strlcpy(dup, s, (ft_strlen(s)) + 1);
	return (dup);
}
