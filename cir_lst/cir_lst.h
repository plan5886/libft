/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cir_lst.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:36:51 by mypark            #+#    #+#             */
/*   Updated: 2022/03/15 01:38:36 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIR_LST_H
# define CIR_LST_H

typedef struct s_cir_lst
{
	void				*content;
	struct s_cir_lst	*next;
	struct s_cir_lst	*prev;
}				t_cir_lst;

t_cir_lst	*cir_lstlast(t_cir_lst *head);
void		cir_lstadd_back(t_cir_lst *head, t_cir_lst *new);
int			cir_lstsize(t_cir_lst *head);
void		cir_lstdelone(t_cir_lst *head, void (*del)(void *));
t_cir_lst	*cir_lstpop_front(t_cir_lst **head);
t_cir_lst	*cir_lstnew(void *content);
t_cir_lst	*cir_lstfind_forward(t_cir_lst *curr, void *target, int (*cmp)(void *, void *));
t_cir_lst	*cir_lstfind_backward(t_cir_lst *curr, void *target, int (*cmp)(void *, void *));

#endif
