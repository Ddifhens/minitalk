/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42school.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 13:01:00 by user              #+#    #+#             */
/*   Updated: 2025/09/28 14:23:46 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int sig)
{
	static unsigned char	charcurr;
	static char				bit_numb;

	charcurr |= (sig == SIGUSR2);
	bit_numb++;
	if (bit_numb == 8)
	{
		if (charcurr == '\0')
			ft_printf("\n");
		else 
			ft_printf("%c", charcurr);
		charcurr = 0;
		bit_numb = 0;
	}
	else
		charcurr <<= 1;
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("%d\n", getpid());
	sigemptyset(&action.sa_mask);
	action.sa_flags = 0;
	action.sa_handler = &signal_handler;
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	while (1)
		pause();
}
