/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:06:04 by flopez-r          #+#    #+#             */
/*   Updated: 2023/10/05 13:26:44 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resultado;
	t_list	*temporal;

	resultado = 0;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		temporal = ft_lstnew(f(lst->content));
		if (!temporal)
		{
			ft_lstclear(&resultado, del);
			return (0);
		}
		ft_lstadd_back(&resultado, temporal);
		lst = lst->next;
	}
	return (resultado);
}

/* int	main(void)
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
 */