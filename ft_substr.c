/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:20:07 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/12 16:29:39 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*dest;
	int		i;
	char	*verif;

	verif = "";
	i = 0;
	str = (char*)s;
	if (!(dest = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if ((int)start > ft_strlen(str))
		return (verif);
	while (s[start] && len > 0)
	{
		dest[i] = s[start];
		start++;
		len--;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
