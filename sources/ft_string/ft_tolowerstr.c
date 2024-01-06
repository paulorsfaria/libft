/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolowerstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 07:29:38 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/06 07:39:33 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_ctype.h"

char	*ft_tolowerstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		str[i] = ft_tolower(str[i]);
	return (str);
}
