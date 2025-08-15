/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:54:01 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/23 19:01:38 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned long nb)
{
	int	c;

	c = 0;
	if (nb > 9)
	{
		c += (ft_putnbr(nb / 10));
		c += (ft_putnbr(nb % 10));
	}
	else
		c += (ft_putchar(nb + '0'));
	return (c);
}
