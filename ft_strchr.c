/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:30:47 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/05 12:44:26 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(char *s, int c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			return (*s);
		*s++;
	}
	return (FALSE);
}

int main(void)
{
	char *s = "salut";
	int c = 97;
	printf("%c", strchr(s, c);
	return 0;
}
