/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:10:59 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/13 18:59:26 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*first;

	if (!lst || !f)
		return (NULL);

	first = ft_lstnew(f(lst));
	elem = first;
	while (lst->next != NULL)
	{
		lst = lst->next;
		elem->next = ft_lstnew(f(lst));
		if (!(elem->next))
		{
			del(elem->next);
			return (NULL);
		}
		elem = elem->next;
	}
	return (first);
}
