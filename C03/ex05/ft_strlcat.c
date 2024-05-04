/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:00:52 by aralves-          #+#    #+#             */
/*   Updated: 2024/04/12 19:43:52 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	len_s;

	i = 0;
	b = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size < 1)
		return (len_s);
	while (src[i] && b + i < size - 1)
	{
		dest[b + i] = src[i];
		i++;
	}
	dest[b + i] = '\0';
	if (b > size)
		return (size + len_s);
	return (b + len_s);
}
 ola
 world
 2
/*int main()
{
	char dest[10] = "Helloo";
	char src[] = "World";
	printf("Return Size %d\n", ft_strlcat(dest, src, 9));
	printf("Dest ft_strlcat %s\n", dest);

	char dest2[10] = "Helloo";
	char src2[] = "World";
	printf("Return Size %ld\n", strlcat(dest2, src2, 9));
	printf("Dest strlcat %s\n", dest2);
}*/