/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:21:30 by luevange          #+#    #+#             */
/*   Updated: 2025/01/07 15:34:50 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void printf_format(va_list arg, const char format, int *cnt)
{
    if (format == 'c')
        return(ft_putchar(va_arg(arg, int ), cnt))
    else if (format == 's')
        return()
    
}

int ft_printf(const char *format, ...)
{
    
}
