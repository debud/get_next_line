/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:26:39 by dbud              #+#    #+#             */
/*   Updated: 2017/01/10 13:27:11 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;
	t_list *res;

	ret = f(lst);
	res = ret;
	lst = lst->next;
	while (lst)
	{
		res->next = f(lst);
		res = res->next;
		lst = lst->next;
	}
	return (ret);
}
