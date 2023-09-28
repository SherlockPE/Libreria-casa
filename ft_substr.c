/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:46:56 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/28 23:42:05 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_string;
	size_t		i;
	
	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	
	if (len > i)
	{
		new_string = malloc(1);
		if (new_string == NULL)
			return (NULL);
		return (new_string);
	}

	new_string = malloc(len + 1);
	if (new_string == NULL)
		return (NULL);

	i = 0;
	while (i < len)
		new_string[i++] = s[start++];
	new_string[i] = '\0';

	return (new_string);
}

/* int	main(void)
{
	char	*string;
	char	*new;

	string = "SUPERNATURAL";
	new = ft_substr(string, 5, 7);
	printf("Original: %s\n", string);
	printf("New starting from byte 5 and 7 bytes of size: %s", new);
	free(new);
} */