/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42school.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:54:23 by user              #+#    #+#             */
/*   Updated: 2025/09/22 13:58:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h" 

char	*make2comp(int a)
{
	char			*str;
	unsigned char	i;
	char			b;

	str = (char *)malloc(9 * (sizeof(char)));
	i = 0;
	b = 64;
	if (a & -128)
		str[i++] = '1';
	else
		str[i++] = '0';
	while (b != 0)
	{
		if (a & b)
			str[i++] = '1';
		else
			str[i++] = '0';
		b = b >> 1;
	}
	str[i] = '\0';
	return (str);
}

int	writetoarray(char **str, char *arg)
{
	unsigned char	x;

	x = 0;
	while (arg[x])
	{
		str[x] = make2comp(arg[x]);
		if (!str[x])
			return (0);
		x++;
	}
	return (1);
}

void	printall(char **str, int length)
{
	unsigned char	x;

	x = 0;
	while (x < length)
		ft_printf("%s\n", str[x++]);
}

int	main(int argc, char **argv)
{
	char	**sends;
	char	length;

	length = ft_strlen(argv[1]);
	if (argc <= 1 || length < 1)
		return (write(2, "invalid arguments\n", 18), 0);
	sends = ft_calloc(length + 1, sizeof(char *));
	if (!sends)
		return (ft_freeall(sends), 0);
	writetoarray(sends, argv[1]);
	printall(sends, length);
	ft_freeall(sends);
	return (0);
}
