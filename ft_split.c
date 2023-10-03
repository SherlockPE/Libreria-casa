/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:52:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/10/03 11:54:23 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


int n_words(char *s, int c)
{
    int    i;
    int    cant_w;

    i = 0;
    cant_w = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        while (s[i] != c && s[i])
        {
            i++;
            if (s[i] == c || s[i] == 0)
                cant_w++;
        }
    }
    return (cant_w);
}

char    **ft_split(char const *s, char c)
{
    int        cant_words;
    int        i;
    int        start;
    char       **array;

    cant_words = n_words((char *)s, c);
    array = (char **)ft_calloc((cant_words + 1) * 8, 1);
    if (!array)
        return (0);
    i = 0;
    while (s[i])
    {
        while (s[i++] == c)
        start = i;
        while (s[i] != c && s[i])
        {
            i++;
            if (s[i] == c || s[i] == 0)
            {
                *array = ft_substr(s, start, i - start);
                *array++;
            }
        }
    }
	return (array);
}
/* 
int	main(void)
{
	ft_split(",,h,ola,,,,q,ue,ta,l", ',');
} */