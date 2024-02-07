/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:57:18 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:23:10 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include "libft.h"

int		ft_atoi(const char *str);
void	*ft_calloc(size_t n, size_t size);
char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned int n);
double	ft_atoi_double(char *str);
long	ft_atoi_long(const char *str);

#endif
