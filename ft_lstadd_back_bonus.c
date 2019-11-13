/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:33:52 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/13 17:05:00 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;
	
	tmp = *alst;
	new->next = NULL; 
	if (*alst == NULL)
	{
		*alst = new;
		return;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
