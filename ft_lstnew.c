/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:37:32 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/13 14:40:11 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *value;

	value = malloc(sizeof(t_list));
	if (!value)
		return (NULL);
	value->content = content;
	value->next = NULL;
	return (value);
}
