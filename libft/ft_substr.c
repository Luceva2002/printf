/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:57:44 by luevange          #+#    #+#             */
/*   Updated: 2024/12/27 18:17:05 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const		*tmp;
	char			*s2;
	unsigned int	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		s2 = (char *)malloc(1);
		s2[0] = 0;
		return (s2);
	}
	tmp = &(s[start]);
	if (len < ft_strlen(tmp))
		s2 = (char *)malloc(len + 1);
	else
		s2 = (char *)malloc(ft_strlen(tmp) + 1);
	while (*tmp && i < len)
	{
		s2[i] = *tmp;
		tmp++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
