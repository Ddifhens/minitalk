/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:37:47 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/20 00:25:37 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)+ 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy((ft_memcpy(str, s1, ft_strlen(s1)))
		+ ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str);
}
