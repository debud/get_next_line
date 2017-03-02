/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:27:35 by dbud              #+#    #+#             */
/*   Updated: 2017/01/10 13:27:39 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *pointer;

	pointer = malloc(size);
	if (pointer == NULL)
		return (NULL);
	else
		return (ft_memset(pointer, 0, size));
}
