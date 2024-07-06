/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:52:50 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/06 20:31:46 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	butterfly(t_stack **a)
{
	t_stack	*b;
	int	n;

	n = stack_size(*a) - 1;
	b = push_to_b(a);
	while (b)
	{
		if (b->index == n)
		{
			pa(a, &b);
			--n;
		}
		else if (find_max_index(b) < stack_size(b) / 2)
			while (b->index != n)
				rb(&b, 1);
		else
			while (b->index != n)
				rrb(&b, 1);
	}
}

t_stack*	push_to_b(t_stack** a)
{
	int	n;
	int counter;
	t_stack	*b;
	
	b = NULL;
	counter = 0;
	n = my_sqrt(stack_size(*a)) + sqrt_3(stack_size(*a));
	while (*a)
	{
		if ((*a)->index <= counter)
		{
			pb(a, &b);
			rb(&b, 1);
			++counter;
		}
		else if ((*a)->index <= counter + n)
		{
			pb(a, &b);
			++counter;
		}
		else
			ra(a, 1);
	}
	return (b);
}

void	sort_for_3(t_stack **a)
{
	if ((*a)->value > (*a)->next->value 
	&& (*a)->value > (*a)->next->next->value)
		rra(a, 1);
	if ((*a)->value > (*a)->next->value)
		sa(a, 1);	
}

sort_for_4(t_stack **a)
{
	int		i;
	t_stack	*b;

	i = find_min_index(*a);
	if (i > 1)
		while(i)
		{	
			rra(a, 1)
			--i;
		}
	else
		while(i)
		{	
			ra(a, 1)
			--i;
		}
	pb(a, &b);
	sort_for_3(a);
	pa(a, &b);
}

sort_for_5(t_stack **a)
{
	int		i;
	t_stack	*b;

	i = find_min_index(*a);
	if (i > 1)
		while(i)
		{	
			rra(a, 1)
			--i;
		}
	else
		while(i)
		{	
			ra(a, 1)
			--i;
		}
	pb(a, &b);
	sort_for_4(a);
	pa(a, &b);
}