/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:54:06 by tsarafia          #+#    #+#             */
/*   Updated: 2019/11/06 17:29:12 by tsarafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dest;
	const char *source;

	dest = dst;
	source = src;

	while (n > 0)
	{
		*dest = *source;
		dest++;
		source++;
		n--;
	}
	return (dst);
}


int main () {
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);

	return(0);
}
