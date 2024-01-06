/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:47:22 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:05:03 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_lst.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*first;

	if (!lst ||!f ||!del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	first = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new_list->next = ft_lstnew(f(lst->content));
		if (!new_list->next)
			ft_lstclear(&first, del);
		new_list = new_list->next;
	}
	return (first);
}
