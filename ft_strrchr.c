/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:17:45 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/12 15:58:53 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char *dest;

	dest = (0);
	while (*s)
	{
		if (*s == c)
			dest = s;
		++s;
	}
	if (dest)
		return (dest);
	if (c == '\0')
		return (s);
	return (0);
}
