/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:49:33 by dbud              #+#    #+#             */
/*   Updated: 2017/01/10 15:06:50 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;

	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		s = s + start;
		ft_strncpy(str, s, len);
		str[len] = '\0';
	}
	return (str);
}
