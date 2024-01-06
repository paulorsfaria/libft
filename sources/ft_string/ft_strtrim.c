/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:24:45 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:10:29 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, start, i - start + 1));
}
