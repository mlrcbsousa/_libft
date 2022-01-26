/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:14:52 by msousa            #+#    #+#             */
/*   Updated: 2022/01/26 20:15:06 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*new_lst;
	t_list	*tmp;

	new_lst = 0;
	while (lst)
	{
		tmp = ft_lstnew(lst->data);
		if (!tmp)
			return (0);
		ft_lstadd_back(&new_lst, tmp);
		lst = lst->next;
	}
	return (new_lst);
}

/*
** Duplicates a linked list
** @param:	- [t_list *] linked list to duplicate
** @return:	[t_list *] duplicate
*/
