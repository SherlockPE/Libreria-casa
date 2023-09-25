/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/20 17:36:01 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
	char *ch;
	
	ch = malloc(sizeof(char *));
	*ch = n + 48;
	
	return (*&ch);
}

/* int main(void)
{
	int	number = 9;
	printf("%s", ft_itoa(number));
	
	return 0;
}
 */