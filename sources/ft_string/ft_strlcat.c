/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:18:41 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:11:17 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dleng;
	size_t	sleng;

	i = 0;
	dleng = ft_strlen(dst);
	sleng = ft_strlen(src);
	if (size == 0)
		return (sleng);
	if (size <= dleng)
		return (sleng + size);
	while (src[i] != '\0' && i < size - dleng - 1)
	{
		dst[dleng + i] = src[i];
		i++;
	}
	dst[dleng + i] = '\0';
	return (dleng + sleng);
}
