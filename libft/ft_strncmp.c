/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:43:26 by dbud              #+#    #+#             */
/*   Updated: 2017/01/10 16:40:00 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2 && n)
	{
		while (n-- > 0)
		{
			if (*s1 != *s2)
			{
				if (*(unsigned char *)s1 != *(unsigned char *)s2)
					return ((unsigned char)*s1 - (unsigned char)*s2);
			}
			if (*s1 == '\0')
				return (0);
			s1++;
			s2++;
		}
	}
	return (0);
}
