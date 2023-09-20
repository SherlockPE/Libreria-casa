/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:57:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/20 22:09:16 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        write(fd, '-', 1);
        n *= -1;
    }
    
}

int main(void)
{
    int number;
    
    number = -1234;
    ft_putnbr_fd(number, 1);
    return 0;
}

//n = -1234