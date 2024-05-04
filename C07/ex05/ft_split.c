/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 05:20:33 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/14 06:43:29 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_checksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_write_words(char *str, char *split, int i, int j)
{
	int	w;

	w = 0;
	while (j != i)
	{
		split[w] = str[j];
		w++;
		j++;
	}
	split[w] = '\0';
}

void	ft_allocnwords(char *str, char *charset, char **split, int words)
{
	int	i;
	int	w;
	int	j;

	w = 0;
	i = 0;
	while (str[i] && w < words)
	{
		while (ft_checksep(str[i], charset) && str[i])
			i++;
		j = i;
		while (ft_checksep(str[i], charset) == 0 && str[i])
			i++;
		if (i - j > 0)
		{
			split[w] = (char *)malloc(((i - j) + 1) * sizeof(char));
			if (!split[w])
				return ;
			ft_write_words(str, split[w], i, j);
			w++;
		}
	}
}

int	ft_getnwords(char *str, char *charset)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (str[i])
	{
		while (ft_checksep(str[i], charset) && str[i])
			i++;
		if (str[i])
			num++;
		while (ft_checksep(str[i], charset) == 0 && str[i])
			i++;
	}
	return (num);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**str2;

	if (!str || !charset)
		return (0);
	words = ft_getnwords(str, charset);
	str2 = (char **)malloc((words + 1) * sizeof(char *));
	if (!str)
		return (0);
	str2[words] = 0;
	ft_allocnwords(str, charset, str2, words);
	return (str2);
}

/* int main()
{
	char **arr;
	arr = ft_split("Artur123Mundoabbc123Ol112311123", "123");
	printf("%s\n%s\n%s\n%s\n%s\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	free (arr);
} */

/* int		main(void)
{
	int		str_n;
	char	*str;
	char	*sep;
	char	**strs;

	str = "WfrONjnyoiSQ5GYKxJ6NSlqrUtPkklcoKR fy";
	sep = "ySzX";
	strs = ft_split(str, sep);
	str_n = 0;
	while (str_n <= 5)
	{
		printf("[%d]: %s\n", str_n, strs[str_n]);
		str_n++;
	}
	free(strs);
	return (0);
} */