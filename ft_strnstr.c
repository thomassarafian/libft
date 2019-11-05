/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:06:07 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/05 19:45:52 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *big, char *little, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return ("(null)");
}
