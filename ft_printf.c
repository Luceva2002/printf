/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:21:30 by luevange          #+#    #+#             */
/*   Updated: 2025/01/10 14:37:14 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int printf_format(va_list arg, const char *format, int cnt)
{
    if (*format == 'c')
        return(ft_putchar(va_arg(arg, int ), cnt));
    else if (*format == 's')
            return(ft_putstr(va_arg(arg, char*))); 
    else if (format == 'p')
        return();
    else if (*format == 'd')
        return(ft_putnbr(va_arg(arg, int)));
    else if (*format == 'i')
        return(ft_putnbr(va_arg(arg, int)));
    else if (*format == 'u')
        return();
    else if (*format == 'x')
        return();
    else if (*format == 'X')
        return();
    else if (*format == '%')
        return(ft_putchar('%'));
    return (0);
}

int ft_printf(const char *format, ...)
{
    int cnt;
    va_list args;

    cnt = 0;
    va_start(args, format);
    if (!format)
        return(0);
    while(*format != '\0')
    {
        if(*format == '%')
        {    
            format ++;
            printf_format(args, format, cnt);
            cnt ++;
        }
        else
        {
            write(1, &format, 1);
            cnt ++;
        }
        format ++;
    }
    va_end(args);
    return (cnt);
}