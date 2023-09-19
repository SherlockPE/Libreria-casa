/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:24:20 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/19 13:03:46 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big;
	char	*small;

	big = (char *)haystack;
	small = (char *)needle;

	i = 0;
	if (needle[0] == '\0')
		return (big);
	while (len--)
	{
		j = 0;
		while (big[i] == small[j])
		{	
			i++;
			j++;
			if (small[j] == '\0')
				return (big + (i - ft_strlen(needle)));
		}
		i++;
	}
	return (0);
}

/* 
int main(void)
{
	const char	*pajar;
	const char	*aguja;
	char		*ptr;

	// char *pajar = "qwerty qwerty qwerty qwerty asdf qwerty qwerty";
	pajar = "12345asdf qwerty qwerty";
	aguja = "";
	ptr = ft_strnstr(pajar, aguja, 11);// asdf qwerty qwerty
	printf("%s", ptr);
	return (0);
}
 */