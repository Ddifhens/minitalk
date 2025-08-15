/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:26:39 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/14 16:45:59 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
*/
#include <unistd.h>
#include <stdlib.h>

int	ft_isalnum(int c)
{
	char	b;

	if (c >= 0 && c <= 127)
	{
		b = c;
		if (((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z'))
			|| ((b >= '0') && (b <= '9')))
			return (8);
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%i",ft_isalnum(argv[1][0]));
	}
}*/
