/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:50:16 by mypark            #+#    #+#             */
/*   Updated: 2021/12/13 21:22:13 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*prev;

	if (lst == NULL || del == NULL)
		return ;
	curr = *lst;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		ft_lstdelone(prev, del);
	}
	*lst = NULL;
}
