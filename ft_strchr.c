/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:30:47 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/05 16:27:00 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(char *s, int c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ("(null)");
}

int main(void)
{
	char *s = "This is jst a String";
	int c = 'u';
	printf("%s", ft_strchr(s, c));
	return 0;
}

