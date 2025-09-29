/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42school.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 13:17:00 by user              #+#    #+#             */
/*   Updated: 2025/09/28 14:11:08 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*char2comp(char a)
{
	char			*str;
	unsigned char	i;
	char			b;

	str = ft_calloc(9, sizeof (char));
	i = 0;
	b = 64;
	if (a & -128)
		str[i++] = '1';
	else
		str[i++] = '0';
	while (b != 0 && b > 0)
	{
		if (a & b)
			str[i++] = '1';
		else
			str[i++] = '0';
		b = b >> 1;
	}
	return (str);
}

void	send(int pid, char a)
{
	unsigned char	i;
	char			*temp;

	i = 0;
	temp = char2comp(a);
	while (temp[i])
	{
		if (temp[i] =='1')
		{
			kill(pid, SIGUSR2);
		}
		else
		{
			kill(pid, SIGUSR1);
		}
		i++;
		usleep(42);
	}
	free(temp);
}

int	main(int argc, char **argv)
{
	int			pid;
	char		*str;
	int			i;

	if (argc > 3)
		return (write(2, "ERROR: invalid parameters", 25), -1);
	pid = ft_atoi(argv[1]);
	str = argv[2];
	i = 0;
	while (str[i])
		send(pid, str[i++]);
	send(pid, '\0');
	return (0);
}
