/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:37:16 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/20 19:32:40 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	c;

	if (!s)
		return (write(1, "(null)", 6));
	c = 0;
	while (*s)
	{
		c += (ft_putchar(*s));
		s++;
	}
	return (c);
}
