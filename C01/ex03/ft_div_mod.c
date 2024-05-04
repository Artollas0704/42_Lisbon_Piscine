/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:07:53 by aralves-          #+#    #+#             */
/*   Updated: 2024/02/29 20:27:02 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int div1 = 0;
	int mod1 = 0;
	int a = 23;
	int b = 10;
	int *div = &div1;
	int *mod = &mod1;
	
	ft_div_mod(a, b, div, mod);
	printf("Valor de div %d valor de mod %d ", *div, *mod);
}*/