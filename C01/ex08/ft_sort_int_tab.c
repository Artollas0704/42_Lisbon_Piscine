/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:05:27 by aralves-          #+#    #+#             */
/*   Updated: 2024/02/29 19:28:03 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	keep;
	int	truesize;
	int	i;

	i = 0;
	keep = 0;
	while (i < size)
	{
		truesize = size - 1;
		while (truesize > i)
		{
			if (tab[i] > tab[truesize])
			{
				keep = tab[i];
				tab[i] = tab[truesize];
				tab[truesize] = keep;
			}
			truesize--;
		}
		i++;
	}
}

/*int main()
{
	int array[5] = {9,2,3,7,8};
	int loop;
	ft_sort_int_tab(array,5);
	for(loop = 0; loop < 5; loop++)
		printf("%d ", array[loop]);
}*/