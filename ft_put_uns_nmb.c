/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nmb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:23:15 by luevange          #+#    #+#             */
/*   Updated: 2025/01/14 14:45:13 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_uns_nmb(long long int n)
{
	char	c;
	int		cnt;

	cnt = 0;
	if (n >= 10)
		cnt += ft_put_uns_nmb(n / 10);
	c = n % 10 + '0';
	cnt += write(1, &c, 1);
	return (cnt);
}
