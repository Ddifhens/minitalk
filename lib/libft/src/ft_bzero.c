/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:32:42 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/18 19:08:39 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		((unsigned char *)s)[n] = (unsigned char)0;
}
