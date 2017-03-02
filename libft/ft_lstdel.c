/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:25:31 by dbud              #+#    #+#             */
/*   Updated: 2017/01/10 13:25:35 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *this;
	t_list *next;

	this = *alst;
	while (this)
	{
		next = this->next;
		del(this->content, this->content_size);
		free(this);
		this = next;
	}
	*alst = NULL;
}
