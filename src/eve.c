/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eve.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42school.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:07:30 by user              #+#    #+#             */
/*   Updated: 2025/08/02 16:26:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

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
	int	fd;
	int	pid;
	const char *cid;

	fd = open("eden", O_CREAT, O_RDWR);
	pid = getpid();
	cid = ft_calloc((ft_strlen(atoi(pid)) + 1) * sizeof(char)) 
	birth();
}


