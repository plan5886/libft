/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_deque.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 02:48:54 by mypark            #+#    #+#             */
/*   Updated: 2022/03/18 15:44:40 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"
#include <stdlib.h>

static t_deque_node	*pop_head(struct s_deque *dq)
{
	t_deque_node	*node;

	node = cir_lstpop_front(&dq->head);
	dq->tail = dq->head->prev;
	return (node);
}

static t_deque_node	*pop_tail(struct s_deque *dq)
{
	t_deque_node	*node;

	node = cir_lstpop_back(&dq->head);
	dq->tail = dq->head->prev;
	return (node);
}

static void	push(t_deque *dq, t_deque_node *new)
{
	cir_lstadd_back(dq->head, new);
	dq->tail = dq->head->prev;
}

t_deque_node	*new_deque_node(void *content)
{
	return (cir_lstnew(content));
}

t_deque	*new_deque()
{
	t_deque	*dq;

	dq = malloc(sizeof(t_deque));
	if (dq == NULL)
		return (NULL);
	dq->pop_head = pop_head;
	dq->pop_tail = pop_tail;
	dq->push = push;
	return (dq);
}
