/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pntr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:24:03 by luevange          #+#    #+#             */
/*   Updated: 2025/01/14 16:30:05 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long ptr)
{
	char	*set;
	int		cnt;

	set = "0123456789abcdef";
	cnt = 0;
	if (ptr >= 16)
		cnt += ft_ptr(ptr / 16);
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
	write(1, "0x", 2);
	cnt += 2;
	cnt += ft_ptr(ptr);
	return (cnt);
}
