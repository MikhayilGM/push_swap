/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:24:06 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/30 20:32:40 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int* b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;	
}

void	bubble_sort(t_stack	*stack)
{
	int	is_sorted;
	t_stack	*iter;

	if	(!stack)
		return ;
	is_sorted = 0;
	while (!is_sorted)
	{
		iter = stack;
		is_sorted = 1;
		while (iter->next)
		{
			if (iter->value > iter->next->value)
			{
				swap(&(iter->value), &(iter->next->value));
				is_sorted = 0;
			}
			iter = iter->next;
		}
	}
}
