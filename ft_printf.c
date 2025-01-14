/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:21:30 by luevange          #+#    #+#             */
/*   Updated: 2025/01/14 15:23:20 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_format(va_list arg, const char *format)
{
	if (*format == 'c')
		return (ft_put_char(va_arg(arg, int)));
	else if (*format == 's')
		return (ft_put_str(va_arg(arg, char *)));
	else if (*format == 'p')
		return (ft_put_pntr(va_arg(arg, unsigned long)));
	else if (*format == 'd')
		return (ft_put_nbr(va_arg(arg, int)));
	else if (*format == 'i')
		return (ft_put_nbr(va_arg(arg, int)));
	else if (*format == 'u')
		return (ft_put_uns_nmb(va_arg(arg, unsigned int)));
	else if (*format == 'x')
		return (ft_put_hex_nmb(va_arg(arg, unsigned int), format));
	else if (*format == 'X')
		return (ft_put_hex_nmb(va_arg(arg, unsigned int), format));
	else if (*format == '%')
		return (ft_put_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		cnt;
	va_list	args;

	cnt = 0;
	va_start(args, format);
	if (!format)
		return (0);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			cnt += printf_format(args, format);
		}
		else
		{
			write(1, format, 1);
			cnt++;
		}
		format++;
	}
	va_end(args);
	return (cnt);
}
