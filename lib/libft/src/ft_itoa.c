/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:14:47 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/27 16:03:50 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	lenofdest(int nb)
{
	int	dec;

	dec = 1;
	if (nb < 0)
	{
		nb *= -1;
		dec++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		dec++;
	}
	return (dec);
}

char	*writetodest(char *dest, int n, int *i)
{
	if (n < 0)
	{
		dest[*i] = '-';
		(*i)++;
		writetodest(dest, -n, i);
	}
	else if (n > 9)
	{
		writetodest(dest, n / 10, i);
		writetodest(dest, n % 10, i);
	}
	else
	{
		dest[*i] = (n + '0');
		(*i)++;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = lenofdest(n);
	str = (char *)malloc((i + 1) * sizeof (char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i = 0;
	return (writetodest(str, n, &i));
}
