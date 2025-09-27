/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42school.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:07:30 by user              #+#    #+#             */
/*   Updated: 2025/08/02 16:26:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h" 

int	g_x = 0;

void	handler(int sig)
{
	if (sig == SIGUSR1)
	{
		g_x = 0;
	}
	if (sig == SIGUSR2)
	{
		g_x = 1;
	}
}

void	birth(void)
{
	struct sigaction	act;

	(void)act.sa_mask;
	act.sa_flags = 0;
	act.sa_handler = &handler;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
}

char	*getbyte(char *dump)
{
	int	x;

	x = 0;
	while (x < 8)
	{
		if (g_x == 1)
			dump[x] = 1;
		if (g_x == 0)
			dump[x] = 0;
		pause();
		x++;
	}
	return (dump);
}

int	comp2int(char *byte)
{
	int	x;
	int nb;

	nb = 1;
	x = 0;
	if (byte[x] == 1)
		nb = nb + ((ft_power(2, 7)) * (-1));
	x++;
	while (byte[x])
	{
		if (byte[x] == 1)
			nb = nb + (ft_power(2, (7 - x)));
		x++;
	}
	return (nb);	
}

int	main(void)
{
	pid_t	pid;
	int		x;
	//int		length;
	char	*byte;
	char	c;

	byte = ft_calloc(9, sizeof (char));
	if (!byte)
		return (write(2, "invalid allocation", 18), -1);
	x = 0;
	pid = getpid();
	birth();
	ft_printf("%u\n === Ready to receive! ===", pid);
	//length = comp2int(getbyte(byte));
	pause();
	while (!x)
	{
		byte = getbyte(byte);
		ft_printf("%s\n", byte);
		c = comp2int(byte);
		write(1, &c, 1);
		bzero(byte, 9);
	}
}
