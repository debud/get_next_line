/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:43:02 by dbud              #+#    #+#             */
/*   Updated: 2017/01/13 18:40:27 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int		destlen;
	int		srclen;
	int		i;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen((char*)src);
	while ((destlen <= (destlen + srclen)) && ((int)nb > 0))
	{
		dest[destlen] = src[i];
		destlen++;
		srclen--;
		i++;
		nb--;
	}
	dest[destlen] = '\0';
	return (dest);
}
