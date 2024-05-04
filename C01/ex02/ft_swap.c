/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:27:11 by aralves-          #+#    #+#             */
/*   Updated: 2024/02/29 13:43:22 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main()
{
	int an = 5;
	int bn = 10;
	int *a = &an;
	int *b = &bn;
	
	ft_swap(a, b);
	printf("Valor de a %d valor de b %d ", *a, *b);
}*/