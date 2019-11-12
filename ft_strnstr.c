/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:06:07 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/12 10:59:52 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*need;

	hay = (char*)haystack;
	need = (char*)needle;
	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == need[j] && (i + j) < len)
			j++;
		if (need[j] == '\0')
			return (&hay[i]);
		i++;
	}
	return (NULL);
}
