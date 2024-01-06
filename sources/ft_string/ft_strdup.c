/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:34:28 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/08 16:56:31 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *str1)
{
	size_t	i;
	size_t	len;
	char	*newstr;

	i = 0;
	len = ft_strlen(str1);
	newstr = (char *) malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	while (str1[i] != '\0')
	{
		newstr[i] = str1[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
