/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:13:34 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/12 17:26:51 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] && to_find[j])
			j++;
		if (j == ft_strlen(to_find))
			return (str + i);
		i++;
	}
	return (0);
}

int main () {
   char haystack[22] = "abc";
   char needle[22] = "abcd";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}