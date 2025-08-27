/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42school.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:56:45 by user              #+#    #+#             */
/*   Updated: 2025/08/27 14:02:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	**ft_freeall( char **save)
{
	char	**temp;

	temp = save;
	while (1)
	{
		if (!*save)
			break ;
		free(*save);
		save++;
	}
	free(temp);
	return (NULL);
}
