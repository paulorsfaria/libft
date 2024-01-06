/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:39:23 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/08 17:02:35 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*val;

	val = (unsigned char *)ptr;
	while (num > 0)
	{
		*val++ = (unsigned char)value;
		num--;
	}
	return (ptr);
}
