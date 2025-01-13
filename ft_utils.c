/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:05:27 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 02:31:57 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	cnt_ln(long long int nb)
{
	long long int	div;
	long long int	cnt;

	cnt = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		cnt++;
	}
	while (nb > 0)
	{
		div = nb / 10;
		cnt++;
		nb = div;
	}
	return (cnt);
}

char	*ft_itoall(long long int nb)
{
	char	*s;
	long long int		i;
	long long int		cnt;

	i = 0;
	cnt = cnt_ln(nb);
	s = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!s)
		return (NULL);
	s[cnt] = '\0';
	while (--cnt >= i)
	{
		s[cnt] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}

size_t	ft_strlen(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;	

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}