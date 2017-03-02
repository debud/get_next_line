/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:49:16 by dbud              #+#    #+#             */
/*   Updated: 2017/01/10 15:05:38 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *aux1;
	const char *aux2;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		aux1 = s1;
		aux2 = s2;
		while (*aux2 != '\0' && *aux1 == *aux2)
		{
			aux1++;
			aux2++;
		}
		if (*aux2 == '\0')
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
