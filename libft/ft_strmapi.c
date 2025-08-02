/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:05:45 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/27 16:51:54 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*i;
	unsigned int	x;
	unsigned int	a;

	a = ft_strlen(s);
	x = 0;
	i = (char *)s;
	i = (char *)malloc((a + 1) * sizeof(char));
	if (!i)
		return (NULL);
	while (x < a)
	{
		i[x] = (*f)(x, s[x]);
		x++;
	}
	i[x] = 0;
	return (i);
}
