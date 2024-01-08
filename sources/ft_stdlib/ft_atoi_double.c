/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 04:29:33 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/02 04:50:48 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_stdlib.h"

double	ft_atoi_double(char *str)
{
	double	result;
	double	sig;
	double	rest;
	int		pow;

	pow = 1;
	result = 0.0;
	rest = 0.0;
	sig = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sig = -1;
	while (*str != '.' && *str != ',' && *str != '\0')
		result = (result * 10) + (*str++ - '0');
	if (*str == '.' || *str == ',')
		++str;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		pow *= 10;
		rest = (rest * 10) + (*str++ - '0');
	}
	return ((result + (rest / pow)) * sig);
}
