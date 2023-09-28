/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:49:25 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/28 17:11:24 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	int		total_size;
	char	*str;
	int		i;
	int		j;

	//SIZE
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);

	//MEMORY
	str = malloc(size_s1 + size_s2 + 1);
	if (str == NULL)
		return (NULL);
	
	//RELLENAR MEMORY
	i = 0;
	j = 0;
	while (i < size_s1)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (j < size_s2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
int main(void)
{
	char	*str1;
	char	*str2;
	char	*str_concat;
	
	str1 = "Hello";
	str2 = "there!";
	
	str_concat = ft_strjoin(str1, str2);
	printf("String resultante: %s", str_concat);
	
	return 0;
}
