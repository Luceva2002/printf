/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nmb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:23:15 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 17:49:18 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_uns_nmb(long long int n)
{
	char	c;
	int		count = 0;

	if (n >= 10)
		count += ft_put_uns_nmb(n / 10);
	c = n % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
