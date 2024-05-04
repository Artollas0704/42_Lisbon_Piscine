/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:49:55 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/14 06:42:43 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_num_len(int num, char *base)
{
	int		len;
	long	nb;
	int		base_len;

	base_len = 0;
	nb = num;
	len = 0;
	while (base[base_len])
		base_len++;
	if (nb == 0)
		return (1);
	else if (nb < 0)
	{
		nb *= -1;
		len ++;
	}
	while (nb > 0)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
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

char	*ft_convert_to_base(char *str, long num, int num_len, char *base_to)
{
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num >= 0 && num_len >= 0)
	{
		if (num_len == 0 && str[0] == '-')
			break ;
		str[num_len] = base_to[num % ft_strlen(base_to)];
		num = num / ft_strlen(base_to);
		num_len--;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long		num;
	char		*str;
	int			num_len;

	if (!nbr || !base_from || !base_to || 
		base_check(base_from) == 1 || base_check(base_to) == 1)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	num_len = ft_num_len(num, base_to);
	str = (char *)malloc((num_len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[num_len] = '\0';
	num_len--;
	return (ft_convert_to_base(str, num, num_len, base_to));
}

/* int main()
{
	printf("%s\n", ft_convert_base("-8A", "0123456789ABCDEF", "01"));
} */