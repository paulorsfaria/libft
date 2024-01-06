/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:09:58 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:04:55 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_lst.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main() {
    // Test the ft_lstnew function
    int *data = (int *)malloc(sizeof(int));
    *data = 42; // Example data to store in the list node

    t_list *new_node = ft_lstnew(data);

    if (new_node) {
        printf("New Node Content: %d\n", *((int *)(new_node->content)));
        free(new_node->content);
        free(new_node);
    } else {
        printf("Failed to create a new node.\n");
    }

    return 0;
}*/