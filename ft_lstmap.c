/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:35:00 by flopez-r          #+#    #+#             */
/*   Updated: 2023/10/05 00:33:15 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    //nueva lista a retornar
    t_list *resultado;
    
    //temporal por si falla la memoria
    t_list *temporal;

    if(!lst || !f)
        return (0);

    while (lst)
    {
        temporal = ft_lstnew(f(lst->content));
        if (!temporal)
        {
            ft_lstclear(resultado, del);
            return (0);
        }
        ft_lstadd_back(resultado, temporal);
        temporal = temporal->next;
        lst = lst->next;
    }
    return (resultado);
}
