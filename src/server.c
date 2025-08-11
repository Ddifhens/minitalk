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

void	handler(int	sig)
{
	(void)sig;
	printf("ping!");
}

void	birth(void)
{
	struct sigaction act;

	act.sa_handler = &handler;
	sigaction(SIGINT, &act, NULL);
	pause();
}

int	main(void)
{
	int	pid;
	
	pid = getpid();
	write(1, "pid, supposedly", 15);
}


