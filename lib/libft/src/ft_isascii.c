/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:38:07 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/13 20:30:33 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
*/

#include <unistd.h>
#include <stdlib.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*int	main(int argc, char ** argv)
{
	if (argc == 2)
		printf("%i",isascii(argv[1][0]));
}*/
