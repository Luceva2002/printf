/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:20:32 by luevange          #+#    #+#             */
/*   Updated: 2024/12/27 18:18:34 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	*a;

	i = 0;
	b = (unsigned char *)src;
	a = (unsigned char *)dest;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
