/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:55:16 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/20 21:11:42 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd , &c, 1);
}
/* 
int main(void)
{
    ft_putchar_fd('a', 1);
    return 0;
}
 */