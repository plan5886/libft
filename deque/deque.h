/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:45:50 by mypark            #+#    #+#             */
/*   Updated: 2022/03/18 15:39:14 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H
# include "../cir_lst/cir_lst.h"

typedef t_cir_lst t_deque_node;

typedef struct s_deque
{
	t_deque_node	*head;
	t_deque_node	*tail;
	void			(*push)(struct s_deque *, t_deque_node *);
	t_deque_node	*(*pop_tail)(struct s_deque *);
	t_deque_node	*(*pop_head)(struct s_deque *);
}				t_deque;

t_deque			*new_deque();
void			free_deque(t_deque *dq, void (*del)(void *));
t_deque_node	*new_deque_node(void *content);

#endif
