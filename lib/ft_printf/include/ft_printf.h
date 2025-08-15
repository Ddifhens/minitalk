/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:53:59 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/23 17:55:26 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *s, ...);
int		ft_putchar(char c);
int		ft_printstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_putnbr(long nb);
int		ft_putunbr(unsigned long nb);
int		ft_seetype(unsigned char *point, va_list param);
int		ft_puthex(unsigned long nb, int cap);
int		ft_printptr(void *ptr);

#endif
