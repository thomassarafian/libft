/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:17:45 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/05 16:26:18 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(char *s, int c)
{
	
	while (*s != '\0')
		s++;
	while (*s != c)
		s--;
	if (*s == c)
		return (s);
	return ("(null)");
}

int	main(void)
{
	char *s = "This is a string for testing";
	int c = 'i';
	printf("%s", ft_strrchr(s, c));
	return (0);
}
