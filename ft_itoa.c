/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/28 14:36:46 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	
}

int	main(void)
{
	char	*str;
	int		n;

	n = -12345;
	str = ft_itoa(n);
	
	if (str == NULL)
		printf("Error en la asignación de memoria");
	printf("Todo bien, todo correctol\n");
	printf("El valor %d fue convertido y asignado a str: %s\n", n, str);
	printf("Dirección de memoria: %p\n", &str);
	free(str);
}

/* char	*ft_itoa(int n)
{
	// char	result;
	long	number;
	int		size;
	(\
	number = (long) n;
	size = 0;
	while (number / 10)
		size++;
	printf("%d", size);
	// if (number < 0)
	// {
	// 	//escribir el -
	// 	number = -number;
	// }
	// if (number > 9)
	// 	ft_itoa(number / 10);
	// result = (number % 10) + '0';
	//devolver valor

// char	*final;
} */

/* int	main(void)
{
	int		n;
	char	*result;
	long	number;
	int		size;
	char	*ptr;
	int		i;

	number = (long) n;
	n = 974;

	i = 0;
	size = 0;
	while (number)
	{
		number /= 10;
		size++;
	}
	ptr = malloc(size);
	while (size--)
	{
		ptr[i] += number / 10;
	}
	printf("%s", ptr);

	// int	number;

	// number = 978;
	// // printf ("%s", ft_itoa(number));

	return (0);
}
 */