/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/28 16:23:27 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		symbol;
	int 	temp_n;
	int		size;
	int		mem_symbol;
	char	*string;
	int		position;

	//Symbol negative or positivo
	mem_symbol = 0;
	symbol = 1;
	if (n < 0)
	{
		symbol = -symbol;
		mem_symbol = 1;
	}
	
	//Number of digits of n
	//12345
	size = 0;
	temp_n = n * symbol;
	while (temp_n != 0)
	{
		temp_n = temp_n / 10;
		size++;
	}
	
	//Asignación de memory y control de error por si Falla la asignación de memoria:
	string = malloc(size + mem_symbol + 1);
	if (string == NULL)
		return (NULL);
	
	//4
	temp_n = n * symbol;
	// position = size - mem_symbol;
	// position = size + mem_symbol + 1;
	position = size + mem_symbol;
	string[position] = '\0';
	position -= 1;
	while (0 < position)
	{
		// if (mem_symbol == 1)
		// 	string[0] = '-';
		if (mem_symbol == 1)
		{
			string[0] = '-';
			mem_symbol == 0;
		}
		// temp_n = temp_n / 10;
		// string[position] = (temp_n % 10) + '0';
		string[position] = (temp_n % 10) + '0';
		temp_n = temp_n / 10;
		position--;
	}
	return (string);
	// n = 12345
	// temp_n = 1
	//'-','1',2','3','4','5','\0'
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
	// Necesito:
	
	// 	1.-Comprobar si es negativo o positivo
	// 		1a.-Tener una variable que me ayude a la asignación de memoria por
	// 			si es o no negativo
	// 	2.- Saber cuántos dígitos tiene la string para asignar el espacio
	// 		correcto de memoria
	// 	3.-Asignar la memoria
	// 		3a.-Asignar un byte más de memoria por si es negativo
	//		3b.- Devolver NULL por si falla
	// 	4.-Convertir cada digito a char y pasarlo a la memoria creada
	// 		4a.- Tengo que arregar el valor nulo?
	// 	5.-Devolver la string o NULL si falla la reserva de memoria

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