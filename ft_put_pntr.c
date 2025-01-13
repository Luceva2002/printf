/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pntr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:24:03 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 11:42:32 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_pntr(unsigned long ptr)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (count < 2)
		write(1, "0x", 2);
	count += 2;
	if (ptr >= 16)
		count += ft_put_pntr(ptr / 16);
	write(1, &hex[ptr % 16], 1);
	count++;
	return (count);
}
