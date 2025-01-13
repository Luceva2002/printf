/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_nmb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:24:53 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 02:25:48 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_hex_nmb(unsigned int n, const char *s)
{
	char hex[16];
	int len;
	int i;

	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		hex[i++] = s[n % 16];
		n = n / 16;
	}
	len = i;
	while (--i >= 0)
		write(1, &hex[i], 1);
	return (len);
}
