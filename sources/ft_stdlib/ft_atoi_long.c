/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:24:13 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:14:19 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_stdlib.h"

long	ft_atoi_long(const char *str)
{
	long	i;
	long	sinal;
	long	result;

	i = 0;
	sinal = 1;
	result = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sinal = sinal * -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		return (result * sinal);
	}
	return (0);
}
