/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:52:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/29 20:11:10 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int    n_words(char *s, int c)
{
    int    i;
    int    cant_w;

    i = 0;
    cant_w = 0;
    while (s[i])
    {
        if (s[i] == c)
          i++;
        while(s[i] != c && s[i])
        {
            i++;
            if (s[i] == c)
                cant_w ++;
        }
    }
    return (cant_w);
}

char **ft_split(char const *s, char c)
{
    char*    string;
    char**    array;
    int        cant_palabras;

    cant_palabras = n_words(s, c);
}

int main()
{
    ft_split(",,h,ola,,,,q,ue,ta,l", ',');
}