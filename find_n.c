/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:04:15 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/06 20:26:18 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack* a)
{
	int	i;
	
	i = 0;
	while (a)
	{
		a = a->next;
		++i;
	}
	return (i);
}

int	my_sqrt(int size)
{
	int	i;

	if (size == 0)
		return (0);
	i = 1;
	while (i < size / i)
	{
		++i;
	}
	return (i);
}

int	sqrt_3(int size)
{
	int	i;

	if (size == 0)
		return (0);
	i = 1;
	while (i < (size / i) / i)
	{
		++i;
	}
	return (i);
}

int	find_max_index(t_stack* a)
{
	int m_value;
	int m_index;
	int cur_index;
	
	cur_index = 0;
	m_index = 0;
	m_value = a->value;
	while(a)
	{
		if(m_value < a->value)
		{
			m_index = cur_index;
			m_value = a->value;
		}
		++cur_index;
		a = a->next;
	}
	return m_index;
}

int	find_min_index(t_stack* a)
{
	int m_value;
	int m_index;
	int cur_index;
	
	cur_index = 0;
	m_index = 0;
	m_value = a->value;
	while(a)
	{
		if(m_value > a->value)
		{
			m_index = cur_index;
			m_value = a->value;
		}
		++cur_index;
		a = a->next;
	}
	return m_index;
}