/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:56:22 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 17:47:35 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_nbr(int n)
{
	char	c;
	int		count = 0;

	if (n == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n >= 10)
		count += ft_put_nbr(n / 10);

	c = n % 10 + '0';
	count += write(1, &c, 1);

	return (count);
}
