/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:41:49 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/13 19:53:07 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
*/

#include <unistd.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	char	b;

	if (c >= 0 && c <= 127)
	{
		b = c;
		if (b >= '0' && b <= '9')
			return (2048);
	}
	return (0);
}
/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%i",isdigit(argv[1][0]));
	}
}*/
