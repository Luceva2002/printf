/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:05:27 by luevange          #+#    #+#             */
/*   Updated: 2024/12/27 18:18:16 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	cnt_ln(int nb)
{
	int	div;
	int	cnt;

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

char	*min_int(char *s)
{
	free(s);
	s = malloc(sizeof(char) * 12);
	ft_strlcpy(s, "-2147483648", 12);
	return (s);
}

char	*ft_itoa(int nb)
{
	char	*s;
	int		i;
	int		cnt;

	i = 0;
	cnt = cnt_ln(nb);
	s = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!s)
		return (NULL);
	if (nb < 0)
	{
		if (nb == -2147483648)
			return (min_int(s));
		s[i++] = '-';
		nb = -nb;
	}
	s[cnt] = '\0';
	while (--cnt >= i)
	{
		s[cnt] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}
