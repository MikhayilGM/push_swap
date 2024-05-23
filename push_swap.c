/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:31:36 by mikhmart          #+#    #+#             */
/*   Updated: 2024/05/23 20:18:06 by mikhmart         ###   ########.fr       */
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
	printf("%s\n", str);
	strs = ft_split(str);
	i = 0;
	while(strs[i] != NULL)
	{
		printf("%d |%s|\n", i, strs[i]);
		++i;
	}
} 