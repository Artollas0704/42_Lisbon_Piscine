/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:44:30 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/12 19:10:24 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_belongs_base(int index, char *str, char *base)
{
	int	i;
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	while (str[index])
	{
		i = 0;
		while (base[i])
		{
			if (str[index] == base[i])
				return (1);
			i++;
		}
		if (i == base_len)
			return (0);
		index++;
	}
	return (0);
}

int	ft_add_num(int index, char *str, char *base, int base_len)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (ft_belongs_base(index, str, base) > 0)
	{
		i = 0;
		while (base[i])
		{
			if (str[index] == base[i])
				num = (num * base_len) + i;
			i++;
		}
		index++;
	}
	return (num);
}

int	base_check(char *base)
{
	int	i;
	int	j;
	int	base_len;

	base_len = 0;
	i = 0;
	while (base[base_len])
		base_len++;
	if (base_len <= 1)
		return (1);
	while (base[i])
	{
		j = 1;
		if (base[i] == '+' || base[i] == '-' || 
			(base[i] == 32 || (base[i] >= 9 && base[i] <= 13)))
			return (1);
		while (base[i + j])
		{
			if (base[i + j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	num;
	int	sign;
	int	base_len;

	base_len = 0;
	i = 0;
	num = 0;
	sign = 1;
	while (base[base_len])
		base_len++;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (base_check(base) == 0)
	{
		num = ft_add_num(i, str, base, base_len);
	}
	return (num * sign);
}

/*int main()
{
	printf("%d\n", ft_atoi_base("tura", "artu"));
	printf("%d\n", ft_atoi_base("8CF", "artu"));
}*/