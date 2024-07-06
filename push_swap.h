/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:35:43 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/06 19:58:14 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

void		sa(t_stack	*a, int flag);
void		sb(t_stack	*b, int flag);
void		ss(t_stack	*a, t_stack *b);
void		pa(t_stack	**a, t_stack **b);
void		pb(t_stack	**a, t_stack **b);
void		ra(t_stack	**a, int flag);
void		rb(t_stack	**a, int flag);
void		rr(t_stack	**a, t_stack **b);
void		rra(t_stack	**a, int flag);
void		rrb(t_stack	**b, int flag);
void		rrr(t_stack	**a, t_stack **b);
char		*ft_strjoin(char *str1, char *str2);
int			onlyNumbers(int argc, char **argv);
long long	ft_atoi(const char *str);
char		**ft_split(char const *s);
void		*ft_memcpy(void *dst, const void *src, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_substr(const char *s, unsigned int start, size_t len);
int	        valid(char *str);
int			isNempty(const char* str);
void		push(t_stack **a, int value);
void		pop(t_stack **stack);
void		clear(t_stack **stack);
int			check_repetition(t_stack **a, int value);
t_stack		*copy_list(t_stack *stack);
void		swap(int *a, int* b);
void		bubble_sort(t_stack	*stack);
void		init_indexes(t_stack *stack);
t_stack		*find(t_stack *stack, int value);
void		set_indexes(t_stack *stack);
int			stack_size(t_stack* a);
int			my_sqrt(int size);
int			sqrt_3(int size);
int 		find_max_index(t_stack* a);
void		butterfly(t_stack** a);
t_stack*	push_to_b(t_stack** a);
void print_list_ind(t_stack *ls);
void print_list(t_stack *ls);
void		error();

#endif