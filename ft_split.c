/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:52:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/10/03 11:38:35 by flopez-r         ###   ########.fr       */
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
    int        memory;
    int        start;
    char       **array;

    //Contar cantidad de palabras
    cant_words = n_words(s, c);

    //Asignar memoria a la primera dimesión de arrays
    array = (char **)malloc((cant_words + 1) * 8);//*8 -> espacio de memoria de un doble puntero es de 8 bytes
    if (!array)
        return (0);
    
    //Rellenar substrings
    i = 0;
    start = 0;
    memory = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
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
}

int	main(void)
{
	ft_split(",,h,ola,,,,q,ue,ta,l", ',');
}