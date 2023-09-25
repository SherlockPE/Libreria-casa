/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:17:49 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/25 15:26:41 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	int		size;

	i = 0;
	size = ft_strlen(s);
	ptr = (char *)s;
	if (c == 0)
		return (&ptr[size]);
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (&ptr[i]);
}

/* int main () {
   const char str[] = "This is just a String";
   const char ch = 'j';
   char *p;
   p = ft_strchr(str, ch);

   printf("String starting from '%c' is: %s", ch, p);
   return (0);
}
 */