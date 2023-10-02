/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:08:48 by flopez-r          #+#    #+#             */
/*   Updated: 2023/10/02 16:46:22 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_element;
	
	if (!lst || !new)
		return;
	else
	{
		last_element = *lst;
		while (last_element->next)
			last_element = last_element->next;
		last_element->next = new;
		new->next = 0;		
	}

}