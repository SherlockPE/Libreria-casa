/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:57:30 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/16 18:45:51 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t des)
{
	size_t	i;

	i = 0;
	while (i < des)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char *source = "Hola mundo!";
	char dest[11];

	ft_strlcpy(dest, source, 6);

	printf("%s", dest);
	return (0);
} */