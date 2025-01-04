/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:58:20 by luevange          #+#    #+#             */
/*   Updated: 2024/12/27 18:19:22 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1 && s2 && str)
	{
		ft_strlcpy(str, s1, ft_strlen(s1) + 1);
		ft_strlcpy(str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
		str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
		return (str);
	}
	else
		return (NULL);
}
