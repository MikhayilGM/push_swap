/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:31:36 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/30 20:54:22 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> 

void print_list(t_stack *ls)
{
	while(ls)
	{
		printf("%d ", ls->value);
		ls = ls->next;
	}
	printf("\n");
}

void print_list_ind(t_stack *ls)
{
	while(ls)
	{
		printf("%d ", ls->index);
		ls = ls->next;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	**strs;
	
	str = "";
	i = 1;
	while(i < argc)
	{
		str = ft_strjoin(str, argv[i]);
		++i;
	}
	strs = ft_split(str);
	i = 0;
	t_stack *a = NULL;
	while(strs[i] != NULL)
	{
		printf("%d |%s| %d\n", i, strs[i], valid(strs[i]));
		if(valid(strs[i]) && !check_repetition(&a, ft_atoi(strs[i])))
		{
			push(&a, ft_atoi(strs[i]));
		}
		++i;
	}
	t_stack *b;
	b = copy_list(a);
	printf("a list\n");
	print_list(a);
	printf("sorted list\n");
	bubble_sort(b);
	print_list(b);
	init_indexes(b);
	print_list_ind(b);
	set_indexes(a);
	printf("a after seting indexes\n");
	print_list(a);
	print_list_ind(a);
} 