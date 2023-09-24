/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:48:35 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/19 13:03:29 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	char *destiny;
	char *source;

	destiny = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (destiny);
} */

/* 
int	main(void)
{
	char	string1[] = "123456789";
	// char	string2[] = "123456789098";

	memcpy(string1[0], string1[5], 5);
	printf("%s\n",string1);
} */