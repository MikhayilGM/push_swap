/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misha <misha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:31:36 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/30 01:06:02 by misha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> 

void print_list(struct stack *ls)
{
	while(ls)
	{
		printf("%d ", ls->value);
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
	struct stack *a = NULL;
	while(strs[i] != NULL)
	{
		printf("%d |%s| %d\n", i, strs[i], valid(strs[i]));
		if(valid(strs[i]) && !check_repetition(&a, ft_atoi(strs[i])))
		{
			push(&a, ft_atoi(strs[i]));
		}
		++i;
	}
	struct stack *b = NULL;
	printf("Stack\n");
	print_list(a);
	pb(&a, &b);
	printf("a\n");
	print_list(a);
	printf("b\n");
	print_list(b);
	pb(&a, &b);
	printf("a\n");
	print_list(a);
	printf("b\n");
	print_list(b);
	pa(&a, &b);
	printf("a\n");
	print_list(a);
	printf("b\n");
	print_list(b);
	pa(&a, &b);
	printf("a\n");
	print_list(a);
	printf("b\n");
	print_list(b);
	rr(&a, &b);
	rr(&a, &b);
	print_list(a);
	rb(&b, 1);
	rra(&a, 1);
	rra(&a, 1);
	print_list(a);
} 