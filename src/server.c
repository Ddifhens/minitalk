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

void	handler(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("sigusr1");
	if (sig == SIGUSR2)
		ft_printf("sigusr2");
}

void	birth(void)
{
	struct sigaction	act;

	act.sa_handler = &handler;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
}

int	main(void)
{
	char	*twos;
	pid_t	pid;

	twos = ft_calloc(9, sizeof (char));
	(void)twos;
	pid = getpid();
	birth();
	ft_printf("%u", pid);
	pause();
	pause();
	pause();
	pause();
	pause();
	pause();
	pause();

}
