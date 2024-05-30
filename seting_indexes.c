/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seting_indexes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:54:22 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/30 20:54:49 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_indexes(t_stack *stack)
{
	int	num;

	num = 0;
	while(stack)
	{
		stack->index = num;
		stack = stack->next;
		++num;
	}
}

t_stack		*find(t_stack *stack, int value)
{
	while(stack)
	{
		if(stack->value == value)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

void	set_indexes(t_stack *stack)
{
	t_stack*	i_stack;

	i_stack = copy_list(stack);
	bubble_sort(i_stack);
	init_indexes(i_stack);
	while(i_stack)
	{
		find(stack, i_stack->value)->index = i_stack->index;
		i_stack = i_stack->next;
	}
	if (i_stack)
		clear(&i_stack);
}