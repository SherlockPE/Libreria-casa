/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:07:17 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/16 19:30:55 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	void	*new;

	size = ft_strlen(s1);
	i = 0;
	new = malloc(size);
	while (i < size)
	{
		ft_strlcpy(new, s1, size);
		i++;
	}
	return (new);
}
/*
int	main(void)
{
	char	*word;

	word = "12345";
	ft_strdup(word);
	printf("%d", (int)ft_strlen(word));
	return (0);
}
 */