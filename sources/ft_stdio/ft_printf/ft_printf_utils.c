/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:12:20 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 05:29:09 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_stdio.h"

int	ft_print_unsigned(unsigned int nbr)
{
	char	*temp;
	int		size;

	if (!nbr)
		return (write(1, "0", 1));
	temp = ft_itoa_unsigned(nbr);
	ft_int_putstr_fd(temp, 1);
	size = ft_strlen(temp);
	free(temp);
	return (size);
}

int	ft_print_ptr(unsigned long int c)
{
	if (!c)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	print_hexadecimal(c, 'a');
	return (len_nbr(c, 16) + 2);
}

int	ft_print_decimal(int nbr)
{
	char	*temp;
	int		size;

	if (!nbr)
		return (write(1, "0", 1));
	temp = ft_itoa(nbr);
	ft_putstr_fd(temp, 1);
	size = ft_strlen(temp);
	free(temp);
	return (size);
}

int	ft_print_hexadecimal(unsigned int c, char letter)
{
	if (c == 0)
		return (write(1, "0", 1));
	else
	{
		print_hexadecimal(c, letter);
		return (len_nbr(c, 16));
	}
}

void	print_hexadecimal(unsigned long int n, char letter)
{
	if (n >= 16)
	{
		print_hexadecimal(n / 16, letter);
		print_hexadecimal(n % 16, letter);
	}
	else if (n < 10)
		ft_putchar_fd((n + '0'), 1);
	else
	{
		if (letter == 'a')
			ft_int_putchar_fd((n - 10 + 'a'), 1);
		if (letter == 'A')
			ft_int_putchar_fd((n - 10 + 'A'), 1);
	}
}
