/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:14:22 by jormanue          #+#    #+#             */
/*   Updated: 2025/04/29 16:41:00 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*ncontent;
	t_list	*tlist;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	nlist = NULL;
	while (lst)
	{
		tlist = f(lst->content);
		ncontent = ft_lstnew(tlist);
		if (!ncontent)
		{
			ft_lstclear(&nlist, del);
			del(tlist);
			return (NULL);
		}
		ft_lstadd_back(&nlist, ncontent);
		if (!nlist)
			ft_lstclear(&nlist, del);
		lst = lst->next;
	}
	return (nlist);
}
