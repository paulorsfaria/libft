/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:23:32 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:14:17 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_stdlib.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * n);
	return (ptr);
}
