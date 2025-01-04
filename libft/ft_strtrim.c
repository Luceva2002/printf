/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:19:39 by luevange          #+#    #+#             */
/*   Updated: 2024/12/27 18:19:56 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	findchar(char const *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*array;

	k = 0;
	i = 0;
	j = ft_strlen(s1) - 1;
	while (i <= j && findchar(set, s1[i]) == 1)
		i++;
	while (j >= i && findchar(set, s1[j]) == 1)
		j--;
	if (i > j)
		return (ft_strdup(""));
	array = malloc(j - i + 2);
	while (i <= j)
	{
		array[k] = s1[i];
		k++;
		i++;
	}
	array[k] = '\0';
	return (array);
}
