/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:44:58 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/13 14:52:51 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	num = ft_add_num(i, str, base, base_len);
	return (num * sign);
}
