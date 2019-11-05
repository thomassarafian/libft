/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:30:47 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/05 17:12:23 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
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
