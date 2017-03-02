/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:24:47 by dbud              #+#    #+#             */
/*   Updated: 2017/01/10 13:24:56 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	ft_size(long nbr)
{
	int		index;

	index = 0;
	if (nbr == 0)
		index++;
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		index++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		index++;
	}
	return (index);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		size;

	nbr = n;
	size = ft_size(nbr) - 1;
	str = NULL;
	str = (char*)malloc(sizeof(char) * ft_size(nbr) + 1);
	if (str == NULL)
		return (NULL);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	while (nbr > 0)
	{
		str[size] = nbr % 10 + '0';
		nbr = nbr / 10;
		size--;
	}
	str[ft_size(n)] = '\0';
	return (str);
}
