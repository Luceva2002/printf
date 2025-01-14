/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:56:22 by luevange          #+#    #+#             */
/*   Updated: 2025/01/14 15:13:14 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(int n)
{
	char	c;
	int		cnt;

	cnt = 0;
	if (n == -2147483648)
	{
		cnt += write(1, "-2147483648", 11);
		return (cnt);
	}
	if (n < 0)
	{
		cnt += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		cnt += ft_put_nbr(n / 10);
	c = n % 10 + '0';
	cnt += write(1, &c, 1);
	return (cnt);
}
