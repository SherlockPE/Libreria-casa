/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:51:51 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/30 18:43:04 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*new;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size]))
		size--;
	new = ft_substr(s1, i, size - i + 1);
	return (new);
}
/* int	main(void)
{
	char	*string1;
	char	*new;
	char	*s1;
	char	*set;

	s1 = "aoiueTUTaeuia";
	set = "aeiou";
	new = ft_strtrim(s1, set);
	printf("%s", new); // TUT
	free(new);
} */
/* 
/* char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*new;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	size = ft_strlen(s1);
	while (size-- && ft_strchr(set, s1[i]))
		j++;
	new = ft_substr(s1, i, j);
	return (new);
} */
/* int	main(void)
{
	char	*string1;
	char	*new;
	char *s1 = "aoiueTUTaeuia";
	char *set = "aeiou";

	new = ft_strtrim(s1, set);
	printf("%s", new);//TUT
	free(new);
} */ */

/* char	*ft_cut(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*new_str;

	i = 0;
	new_str = ft_calloc(ft_strlen(str1), 1);
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
				break ;
			else
			{
				new_str += str1[i];
				j++;
			}
		}
		i++;
	}
	return (new_str);
} */
/* int	*ft_cut(char *str1, char *str2)
{
	int		i;
	int		j;
	int     coincidences;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				coincidences++;
				break ;
			}
			else
				j++;
		}
		i++;
	}
	return (coincidences);
} */

/* char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	char	*new2;

	new = ft_cut(s1, set);
	new2 = ft_strdup(new);
	return (new2);
} */
