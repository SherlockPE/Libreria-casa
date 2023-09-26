/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:24:20 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/26 18:34:29 by flopez-r         ###   ########.fr       */
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

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (len > i + j) && haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*pajar;
	const char	*aguja;
	char		*ptr;

	// char *pajar = "qwerty qwerty qwerty qwerty asdf qwerty qwerty";
	aguja = "abc";
	pajar = "123456abcdefghijklmnop";
	ptr = ft_strnstr(pajar, aguja, 9);// asdf qwerty qwerty
	printf("%s", ptr);
	return (0);
}
 */