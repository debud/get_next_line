/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:21:11 by dbud              #+#    #+#             */
/*   Updated: 2017/01/13 17:47:22 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	n;

	i = 0;
	neg = 0;
	n = 0;
	while ((unsigned char)str[i] <= 32)
		i++;
	if ((unsigned char)str[i] == '-')
		neg = 1;
	if (((unsigned char)str[i] == '-') || ((unsigned char)str[i] == '+'))
		i++;
	while ((unsigned char)(str[i] >= '0') && ((unsigned char)str[i] <= '9'))
	{
		n = n * 10;
		n = n + ((unsigned char)str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-n);
	else
		return (n);
}
