/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:18:48 by luevange          #+#    #+#             */
/*   Updated: 2025/01/10 16:54:26 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int cnt)
{
	char	*s;

	s = ft_itoa(cnt);
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
	free(s);
}

int ft_putunsnmb(unsigned int n)
{
	ft_putnbr((unsigned int)n);
}