/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:58:35 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/30 20:23:41 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_repetition(t_stack **a, int value)
{
	t_stack	*tmp;
	
	if(*a == NULL)
		return (0);
	tmp = *a;
	while(tmp != NULL)
	{
		if(tmp->value == value)
			return (1);
		tmp=tmp->next;
	}
	return (0);
}

void	push(t_stack **a, int val)
{
	t_stack	*tmp;
	
	if (*a == NULL)
	{
		*a = (t_stack *)malloc(sizeof(t_stack));
		(*a)->value = val;
		(*a)->next = NULL;
		return ;
	}
	tmp = *a;
	*a = (t_stack *)malloc(sizeof(t_stack));
	(*a)->value = val;
	(*a)->next = tmp;
}

void	pop(t_stack **stack)
{
	t_stack	*tmp;
	
	if (!(*stack))
		return ;
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;	
}

void	clear(t_stack **stack)
{
	if(!(*stack))
		return ;
	while(*stack)
	{
		pop(stack);
	}
}

t_stack	*copy_list(t_stack *stack)
{
	t_stack	*result;
	t_stack	*tmp;
	
	tmp = NULL;
	if (!stack)
		return NULL;
	else
	{
		result = (t_stack *)malloc(sizeof(t_stack));
		result->value = stack->value;
		result->next = NULL;
		tmp = result;
	}
	while(stack->next)
	{
		tmp->next = (t_stack *)malloc(sizeof(t_stack));
		tmp = tmp->next;
		stack = stack->next;
		tmp->value = stack->value;
		tmp->next = NULL;
	}
	return (result);
}
