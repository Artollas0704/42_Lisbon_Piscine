/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:41:34 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/04 19:28:22 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;
	char	*src2;
	char	*dest2;
	int		src_size2;
	
	src = calloc(11, sizeof(char));
	src2 = calloc(11, sizeof(char));
	dest = calloc(9, sizeof(char));
	dest2 = calloc(9, sizeof(char));
	src = "alo galera";
	src2 = "alo galera";
	src_size = ft_strlcpy(dest, src, 8);
	src_size2 = strlcpy(dest2, src2, 8);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	printf("src2: %s\n", src2);
	printf("dest2: %s\n", dest2);
	printf("src_size2: %d\n", src_size2);
	return(0);
}*/