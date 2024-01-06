/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:36:22 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 04:11:21 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;
	char	*newstr;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstr = (char *) malloc(sizeof(char) * ((s1len + s2len) + 1));
	if (newstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
		newstr[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		newstr[j++] = s2[i++];
	newstr[j] = '\0';
	return (newstr);
}
