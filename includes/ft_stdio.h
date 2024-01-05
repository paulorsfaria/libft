/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:56:56 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 05:09:50 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include "libft.h"

void	ft_putchar_fd(char c, int fd);
int		ft_int_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_int_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
/*					ft_printf				*/
int		ft_printf(const char *format, ...);
int		ft_findmytype(int type, va_list lst);
int		ft_print_decimal(int nbr);
int		ft_print_unsigned(unsigned int nbr);
int		ft_print_hexadecimal(unsigned int c, char letter);
int		ft_print_ptr(unsigned long int c);
void	print_hexadecimal(unsigned long int n, char letter);
int		len_nbr(unsigned long int n, int j);

#endif