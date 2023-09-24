/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:57:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/24 10:59:22 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	minus;

	minus = '-';

	if (n < 0)
	{
		write(fd, &minus, 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n = (n % 10) + 48;
	}
	write(fd, &n, 1);
}

int	main(void)
{
	int	number;

	number = -1;
	ft_putnbr_fd(number, 1);
	return (0);
}

// n = -1234