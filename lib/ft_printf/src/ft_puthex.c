/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 19:00:13 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/23 19:00:43 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_puthex(unsigned long nb, int cap)
{
	char	*table;
	int		p;

	p = 0;
	if (cap)
		table = "0123456789ABCDEF";
	else
		table = "0123456789abcdef";
	if (nb > 15)
	{
		p += (ft_puthex(nb / 16, cap));
		p += (ft_puthex(nb % 16, cap));
	}
	else
		p += (ft_putchar(table[nb]));
	return (p);
}
