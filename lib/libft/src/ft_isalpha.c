/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:55:16 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/13 19:51:42 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	char	b;

	if (c >= 0 && c <= 127)
	{
		b = c;
		if ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z'))
			return (1024);
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%i",ft_isalpha((argv[1][0])));
	}
}*/
