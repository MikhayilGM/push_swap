/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:45:00 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/06 20:04:58 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid(char *str)
{
	if(((*str != '-' && *str != '+') || *(str + 1) == '\0') && !(*str >= '0' && *str <= '9'))
		return (0);
	++str;
	while(*str)
	{
		if(!(*str >= '0' && *str <= '9'))
			return (0);
		++str;
	}
	return (1);
}

int	isNempty(const char* str)
{
	while(*str)
	{
		if(*str != ' ' && !(*str >= 9 && *str <= 13))
			return (1);
		++str; 
	}
	return (0);
}

void	error()
{
	write(2, "Error\n", 6);
	exit(1);
}