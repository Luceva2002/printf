/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pntr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:24:03 by luevange          #+#    #+#             */
/*   Updated: 2025/01/14 15:35:36 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long ptr, int cnt)
{
	char	*set;

	set = "0123456789abcdef";
	if (ptr >= 16)
		cnt += ft_ptr(ptr / 16, cnt);
	write(1, &set[ptr % 16], 1);
	cnt++;
	return (cnt);
}

int	ft_put_pntr(unsigned long ptr)
{
	int	cnt;

	cnt = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if (cnt < 2)
		write(1, "0x", 2);
	cnt += 2;	ft_ptr(ptr, cnt);
	return (cnt);
}
