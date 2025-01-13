/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:21:30 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 17:34:54 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
/* 
#include "printf.h"
#include <stdio.h> // Per confronto con printf originale

int	main(void)
{
	int	n;

	int ret1, ret2;
	// Test singolo carattere
	ret1 = ft_printf("Custom: Char: %c\n", 'A');
	ret2 = printf("Original: Char: %c\n", 'A');
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test stringa
	ret1 = ft_printf("Custom: String: %s\n", "Hello, world!");
	ret2 = printf("Original: String: %s\n", "Hello, world!");
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test puntatore
	n = 42;
	ret1 = ft_printf("Custom: Pointer: %p\n", (void *)&n);
	ret2 = printf("Original: Pointer: %p\n", (void *)&n);
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test numeri decimali
	ret1 = ft_printf("Custom: Decimal: %d\n", -12345);
	ret2 = printf("Original: Decimal: %d\n", -12345);
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test numeri interi
	ret1 = ft_printf("Custom: Integer: %i\n", 12345);
	ret2 = printf("Original: Integer: %i\n", 12345);
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test numeri unsigned
	ret1 = ft_printf("Custom: Unsigned: %u\n", 4294967295u);
	ret2 = printf("Original: Unsigned: %u\n", 4294967295u);
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test numeri esadecimali minuscoli
	ret1 = ft_printf("Custom: Hexadecimal (lowercase): %x\n", 255);
	ret2 = printf("Original: Hexadecimal (lowercase): %x\n", 255);
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test numeri esadecimali maiuscoli
	ret1 = ft_printf("Custom: Hexadecimal (uppercase): %X\n", 255);
	ret2 = printf("Original: Hexadecimal (uppercase): %X\n", 255);
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	// Test percentuale
	ret1 = ft_printf("Custom: Percent sign: %%\n");
	ret2 = printf("Original: Percent sign: %%\n");
	printf("Return values: Custom = %d, Original = %d\n\n", ret1, ret2);
	return (0);
}
 */