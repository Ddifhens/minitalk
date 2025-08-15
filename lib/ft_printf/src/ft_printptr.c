/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 18:58:15 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/23 18:58:17 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	int	p;

	p = 0;
	if (!ptr)
		return (ft_printstr("(nil)"));
	p += ft_printstr("0x");
	return (p + (ft_puthex((unsigned long)ptr, 0)));
}
