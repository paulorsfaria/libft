/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:41:21 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:21:09 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while ((str[i] != (char)c) && str[i] != '\0')
		i++;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	else
		return (NULL);
}
