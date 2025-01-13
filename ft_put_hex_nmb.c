/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_nmb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:24:53 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 17:30:02 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_hex_nmb(unsigned int n, const char *format)
{
	int		count;
	char	*hex;
	char	*hex_upper;

	count = 0;
	hex = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_put_hex_nmb(n / 16, format);
	if (*format == 'x')
		write(1, &hex[n % 16], 1);
	else if (*format == 'X')
		write(1, &hex_upper[n % 16], 1);
	return (count + 1);
}
