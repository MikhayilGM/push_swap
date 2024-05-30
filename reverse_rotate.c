/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:54:22 by misha             #+#    #+#             */
/*   Updated: 2024/05/30 18:43:40 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int flag)
{
	t_stack	*tmp;
	
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

void	rrb(t_stack **b, int flag)
{
	t_stack	*tmp;

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

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
