/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:21:29 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/16 18:34:00 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strcopy(int size, char **strs, char *sep, char *arr)
{
	int	i;
	int	counter;
	int	j;
	int	a;

	a = -1;
	counter = 0;
	while (++a < size)
	{
		i = 0;
		while (strs[a][i])
		{
			j = 0;
			arr[counter++] = strs[a][i++];
			while (strs[a][i] == '\0' && sep[j] && a < size -1)
				arr[counter++] = sep[j++];
		}
	}
	arr[counter] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size2;
	int		a;
	int		totalloc;
	char	*arr;

	totalloc = 0;
	a = 0;
	size2 = size;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (size2 > 0)
	{
		totalloc += ft_strlen(strs[a]);
		a++;
		size2--;
	}
	arr = malloc(sizeof(char) * (totalloc + (ft_strlen(sep) * (size - 1))) + 1);
	if (!arr)
		return (0);
	arr = strcopy(size, strs, sep, arr);
	return (arr);
}

/* int	main(void)
{
	char	*tab[4];
	tab[0] = "Hello";
	tab[1] = "World ";
	tab[2] = "This ";
	tab[3] = "Is ";
	//printf("d", );
	printf("%s\n", ft_strjoin(4, tab, "Pasquale"));
	return (0);
} */