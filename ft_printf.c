/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:21:30 by luevange          #+#    #+#             */
/*   Updated: 2025/01/04 01:27:26 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int ft_printf(const char *format)
{
    va_list args;
    int count;

    va_start(args, format);
    count = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
                count += ft_putchar(va_arg(args, int n));
            else if (*format == 's')
                count += ft_putstr(va_arg(args, char *s));
            else if (*format == 'd')
                count += ft_putnbr(va_arg(args, int n));
            else if (*format == 'x')
                count += ft_puthex(va_arg(args, unsigned int n));
            else if (*format == 'X')
                count += ft_puthex(va_arg(args, unsigned int n));
            else if (*format == 'u')
                count += ft_putunbr(va_arg(args, unsigned int n));
            else if (*format == 'p')
                count += ft_putptr(va_arg(args, void *s));
        }
        else
            count += ft_putchar(*format);
        format++;
    }
    va_end(args);
    return (count);
}
