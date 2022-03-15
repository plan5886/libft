/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 02:48:54 by mypark            #+#    #+#             */
/*   Updated: 2022/03/15 17:01:57 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"
#include <stdlib.h>

static t_queue_node	*pop(struct s_queue *q)
{
	return (cir_lstpop_front(&q->head));
}

static void	push(t_queue *q, t_queue_node *new)
{
	cir_lstadd_back(q->head, new);
}

t_queue_node	*new_queue_node(void *content)
{
	return (cir_lstnew(content));
}

t_queue	*new_queue()
{
	t_queue	*q;

	q = malloc(sizeof(t_queue));
	if (q == NULL)
		return (NULL);
	q->pop = pop;
	q->push = push;
	return (q);
}

void	free_queue(t_queue *q, void (*del)(void *))
{
	cir_lstclear(&q->head, del);
	free(q);
}
