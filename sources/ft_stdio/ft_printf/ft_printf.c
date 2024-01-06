/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:19:27 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 05:29:20 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/ft_stdio.h"

int	ft_findmytype(int type, va_list lst)
{
	if ('c' == type)
		return (ft_int_putchar_fd(va_arg(lst, int), 1));
	else if ('s' == type)
		return (ft_int_putstr_fd(va_arg(lst, char *), 1));
	else if ('p' == type)
		return (ft_print_ptr(va_arg(lst, unsigned long int)));
	else if ('d' == type || 'i' == type)
		return (ft_print_decimal(va_arg(lst, int )));
	else if ('u' == type)
		return (ft_print_unsigned(va_arg(lst, unsigned int)));
	else if ('x' == type)
		return (ft_print_hexadecimal(va_arg(lst, unsigned int), 'a'));
	else if ('X' == type)
		return (ft_print_hexadecimal(va_arg(lst, unsigned int), 'A'));
	else if ('%' == type)
		return (ft_int_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	va_list	lst;

	va_start(lst, format);
	i = 0;
	j = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
				j += ft_findmytype(format[i], lst);
		}
		else
			j += ft_int_putchar_fd(format[i], 1);
		i++;
	}
	va_end(lst);
	return (j);
}
