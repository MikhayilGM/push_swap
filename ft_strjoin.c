/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:56:10 by mikhmart          #+#    #+#             */
/*   Updated: 2024/07/06 19:43:57 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (str1 == NULL)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	result = malloc(len1 + len2 + 2);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, str1, len1);
	result[len1] = ' ';
	ft_memcpy(result + len1 + 1, str2, len2 + 1);
	free(str1);
	return (result);
}
