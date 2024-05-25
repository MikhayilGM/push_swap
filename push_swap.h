/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:35:43 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/25 20:45:56 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

struct stack
{
	int				value;
	struct stack	*next;
};

char		*ft_strjoin(const char *str1, const char *str2);
int			onlyNumbers(int argc, char **argv);
long long	ft_atoi(const char *str);
char		**ft_split(char const *s);
void		*ft_memcpy(void *dst, const void *src, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_substr(const char *s, unsigned int start, size_t len);
int	        valid(char *str);
int			isNempty(const char* str);
void		push(struct stack **a, int value);
int			check_repetition(struct stack **a, int value);
void		sa(struct stack *a, int flag);
void		sb(struct stack *b, int flag);
void		ss(struct stack *a, struct stack *b);
void		pa(struct stack	*a, struct stack *b);
void		pb(struct stack	*a, struct stack *b);

#endif