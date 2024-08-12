/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:42:18 by paulo-do          #+#    #+#             */
/*   Updated: 2024/08/12 12:29:16 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

char	*ft_strndup(const char *str, size_t size)
{
	char	*better_str;

	better_str = 0;
	better_str = ft_calloc(sizeof(char), size + 1);
	if (!better_str)
		return (NULL);
	ft_memcpy(better_str, str, size);
	return (better_str);
}
