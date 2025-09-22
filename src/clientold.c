/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42school.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:58:58 by user              #+#    #+#             */
/*   Updated: 2025/08/27 14:01:18 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

unsigned int itob(char c)
{
	if (c == 0)
		return (0);
	if (c == 1)
		return (1);
	return (c % 2) + 10 * itob(c / 2);
}

char	*bintoc(unsigned int b, char *str)
{
	while (b)
	{
		*str = b % 10;
		b = b / 10;
		str++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	pid_t			pid;
	char			**bin;
	int				argsize;
	char			*tmp;
	int				i;

	i = 0;
	if (argc != 3)
		return (write(2, "invalid parameters\n", 20), 1); 
	argsize = ft_strlen(argv[2]);
	bin = ft_calloc(argsize, sizeof(char *));
	while (i < argsize)
	{
		tmp = calloc(8, sizeof(char));
		if (!tmp)
			return(ft_freeall(bin), write(2, "invalid allocation at tmp\n", 27), 1);
		bin[i] = tmp;
		i++;
	}
	if (!bin)
		return (write(2, "invalid alocation\n", 19), 1);
	//bin = ft_strdup(ft_itoa(itob(argv[2][0])));
	ft_printf("%s", bin);
	pid = ft_atoi(argv[1]);
	(void)pid;
}
