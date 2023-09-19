/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:31:49 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/17 18:36:23 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else
				return (s1[i] + s2[i]);
		}
		i++;
	}
	return (0);
}
/* 
int main(void)
{
	char* string_1 = "123456789";
	char* string_2 = "123456700";
	int value;

	value = ft_strncmp(string_1, string_2, 12);

   if(value < 0) {
	  printf("str1 is menor than str2");
   } else if(value > 0) {
	  printf("str1 is mayor than str2");
   } else {
	  printf("str1 is igual to str2");
   }
	return 0;
}
*/