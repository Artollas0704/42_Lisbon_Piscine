/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:35:16 by aralves-          #+#    #+#             */
/*   Updated: 2024/02/29 18:54:56 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	keep;
	int	truesize;

	truesize = size - 1;
	i = 0;
	keep = 0;
	while (i < size / 2)
	{
		keep = tab[i];
		tab[i] = tab[truesize - i];
		tab[truesize - i] = keep;
		i++;
	}
}

/*int main()
{
	int array[10] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 0};
	int loop;
	ft_rev_int_tab(array,10);
	for(loop = 0; loop < 10; loop++)
		printf("%d ", array[loop]);
}*/