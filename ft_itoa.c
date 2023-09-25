/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/25 14:14:32 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*ch;

	ch = malloc(sizeof(char *));
	*ch = n + 48;
	return (*&ch);
}

/* int	main(void)
{
	int	number;

	number = 9;
	printf ("%s", ft_itoa(number));

	return (0);
}
 */