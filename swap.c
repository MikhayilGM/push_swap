/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:13:10 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/25 20:29:27 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(struct stack *a, int flag)
{
	int	tmp;
	
	if(a == NULL || a->next == NULL)
		return ;
	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
	if(flag)
		write(1, "sa\n", 3);
}

void	sb(struct stack *b, int flag)
{
	int	tmp;
	
	if(b == NULL || b->next == NULL)
		return ;
	tmp = b->value;
	b->value = b->next->value;
	b->next->value = tmp;
	if(flag)
		write(1, "sb\n", 3);
}

void	ss(struct stack *a, struct stack *b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}
