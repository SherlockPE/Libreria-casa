/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:55:50 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/20 21:21:16 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        write(fd, &s[i++], 1);
}

/* int main(void)
{
    char str[] = "hola nwn";
    ft_putstr_fd(str, 1);
    ft_putstr_fd(str, 1);
    return 0;
}
 */