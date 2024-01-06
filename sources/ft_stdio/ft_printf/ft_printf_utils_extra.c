/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_extra.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 04:59:28 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 05:29:14 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_stdio.h"

int	len_nbr(unsigned long int n, int j)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		counter++;
		n = n / j;
	}
	return (counter);
}
