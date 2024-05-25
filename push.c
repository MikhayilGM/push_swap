/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:30:10 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/25 20:45:48 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(struct stack	*a, struct stack *b)
{
	struct stack	*tmp;
	 
	if(b)
		return;
	tmp = b->next;
	b->next = a;
	a = b;
	b = tmp;
	write(1, "pa\n", 3);
}

void	pb(struct stack	*a, struct stack *b)
{
	struct stack	*tmp;
	 
	if(a)
		return;
	tmp = a->next;
	a->next = b;
	b = a;
	b = tmp;
	write(1, "pb\n", 3);
}
