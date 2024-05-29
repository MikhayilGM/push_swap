/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misha <misha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:54:22 by misha             #+#    #+#             */
/*   Updated: 2024/05/30 01:07:34 by misha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(struct stack **a, int flag)
{
	struct stack	*tmp;
	
	if(!(*a) || !(*a)->next)
		return ;
	tmp = *a;
	while((*a)->next->next)
		*a = (*a)->next;
	(*a)->next->next = tmp;
	tmp = (*a)->next;
	(*a)->next = NULL;
	*a = tmp;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(struct stack **b, int flag)
{
	struct stack	*tmp;

	if(!(*b) || !(*b)->next)
		return ;
	tmp = *b;
	while((*b)->next->next)
		*b = (*b)->next;
	(*b)->next->next = tmp;
	tmp = (*b)->next;
	(*b)->next = NULL;
	*b = tmp;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(struct stack **a, struct stack **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
