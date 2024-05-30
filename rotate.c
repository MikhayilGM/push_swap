/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:19:19 by misha             #+#    #+#             */
/*   Updated: 2024/05/30 18:44:17 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack **a, int flag)
{
    t_stack	*tmp;
    
    if(!(*a) || !((*a)->next))
		return ;
	tmp = *a;
	while((*a)->next)
		*a = (*a)->next;
	(*a)->next = tmp;
	(*a) = (*a)->next;
	tmp = (*a)->next;
	(*a)->next = NULL;
	*a = tmp;
    if (flag)
        write(1, "ra\n", 3);
}

void    rb(t_stack **b, int flag)
{
	t_stack *tmp;
	
	if(!(*b) || !((*b)->next))
		return ;
	tmp = *b;
	while((*b)->next)
		*b = (*b)->next;
	(*b)->next = tmp;
	(*b) = (*b)->next;
	tmp = (*b)->next;
	(*b)->next = NULL;
	*b = tmp;
	if (flag)
		write(1, "rb\n", 3);
}

void    rr(t_stack **a, t_stack **b)
{
	ra(a, 0);
	rb(b, 0);
    write(1, "rr\n", 3);
}
