/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:44:00 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/13 20:36:41 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	arr = (int *)malloc(((max - min)) * sizeof(int));
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*int main()
{
	int	*arr;

	arr = (int *)malloc(4 * sizeof(int));
	
	arr = ft_range(1, 5);
	int i = 0;
	while (i < 4)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}*/
/* int		main(void)
{
	int *res;
	int	offset;

	offset = 0;
	res = ft_range(0, 9);
	while (offset < 9)
	{
		printf("%d ", res[offset]);
		offset++;
	}
	printf("\n");
	if (res[offset] == res[offset - 1])
		printf(" > KO, max number included in array.\n");

	int *arr1;
	int *arr2;
	int *arr3;
	int *arr4;
	int *arr5;
	int *arr6;

	arr1 = ft_range(1, 2);
	arr2 = ft_range(-1, 2);
	arr3 = ft_range(-3, -1);
	arr4 = ft_range(-2, -3);
	arr5 = ft_range(0, 10);
	arr6 = ft_range(-2, 0);

	offset = 0;
	while (offset < 1)
	{
		printf("%d ", arr1[offset]);
		offset++;
	}
	printf("| min %d ", 1);
	printf("| max %d", 2);
	printf("\n");
	offset = 0;
	while (offset < 3)
	{
		printf("%d ", arr2[offset]);
		offset++;
	}
	printf("| min %d ", -1);
	printf("| max %d", 2);
	printf("\n");
	offset = 0;
	while (offset < 2)
	{
		printf("%d ", arr3[offset]);
		offset++;
	}
	printf("| min %d ", -3);
	printf("| max %d", -1);
	printf("\n");
	offset = 0;
	while (offset < 10)
	{
		printf("%d ", arr5[offset]);
		offset++;
	}
	printf("| min %d ", 0);
	printf("| max %d", 10);
	printf("\n");
	offset = 0;
	while (offset < 2)
	{
		printf("%d ", arr6[offset]);
		offset++;
	}
	printf("| min %d ", -2);
	printf("| max %d", 0);
	return (0);
} */