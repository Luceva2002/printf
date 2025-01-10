/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrld.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:20:55 by luevange          #+#    #+#             */
/*   Updated: 2025/01/10 14:31:32 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
		return (c);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return(write(1, "(null)", 6));	
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i ++;
	}
	return (i);
}