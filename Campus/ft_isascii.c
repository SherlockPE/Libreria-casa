/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:47:45 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/14 10:05:40 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isacci(int c)
{
	if (c >= 0 && c <= 127)
		return (c);
	else
		return (0);
}
// #include <stdio.h>
// int main(void)
// {
//     char *word = "Jajaop jfv´rofxk73829%02 ssff545 qawzesrxctyu30,";
//     int i = 0;
//     while (word[i] != '\0')
//     {
//         printf("The charachter '%c' : %d\n", word[i], ft_isacci(word[i]));
//         i++;
//     }
//     return 0;
// }
