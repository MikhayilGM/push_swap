/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:58:35 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/25 20:12:19 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_repetition(struct stack **a, int value)
{
	struct stack	*tmp;
	
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

void	push(struct stack **a, int val)
{
	struct stack	*tmp;
	
	if(*a == NULL)
	{
		*a = (struct stack *)malloc(sizeof(struct stack));
		(*a)->value = val;
		(*a)->next = NULL;
		return;
	}
	tmp = *a;
	*a = (struct stack *)malloc(sizeof(struct stack));
	(*a)->value = val;
	(*a)->next = tmp;
}
