/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:35:00 by flopez-r          #+#    #+#             */
/*   Updated: 2023/10/03 15:53:45 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !del)
		return (0);	
	
	t_list *new_list;

	new_list = 0;

	while (lst)
	{
		new_list->content = (t_list *)malloc(sizeof(lst));
		if (!new_list->content)
			return (0);
		lst->content = new_list->content;
		lst->next = new_list->next;
		lst = lst->next;
	}

	//Itera la lista y aplica cada función
	while (new_list)
	{
		f(new_list->content);
		new_list = new_list->next;
	}

	return (new_list);
}

int	main(void)
{
	t_list *cabecera;
	t_list	*item1;
	t_list	*item2;
	t_list 	*item3;
	t_list	*item4;

	item1->content = "abcde";
	item2->content = "alianza";
	item3->content = "anastacia";
	item4->content = "ajedrez";

	cabecera->next = item1;
	item1->next = item2;
	item2->next = item3;
	item3->next = item4;
	item4->next = 0;
}