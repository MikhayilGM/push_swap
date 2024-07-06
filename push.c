/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:30:10 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/06 18:52:31 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack	**a, t_stack **b)
{
	t_stack	*tmp;
	 
	if(!b || !(*b))
		return;
	tmp = (*b)->next;
	(*b)->next = *a;
	(*a) = (*b);
	(*b) = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_stack	**a, t_stack **b)
{
	t_stack	*tmp;
	
	if(!a || !(*a))
		return;
	tmp = (*a)->next;
	(*a)->next = (*b);
	(*b) = (*a);
	(*a) = tmp;
	write(1, "pb\n", 3);
}
