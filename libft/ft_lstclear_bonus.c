/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:22:14 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/29 15:34:56 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*point;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		point = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = point;
	}
	free(*lst);
	*lst = NULL;
}
