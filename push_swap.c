/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misha <misha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:31:36 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/24 06:00:19 by misha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h> 

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
	while(strs[i] != NULL)
	{
		printf("%d |%s| %d\n", i, strs[i], valid(strs[i]));
		++i;
	}
} 