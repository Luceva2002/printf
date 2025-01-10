/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:18:48 by luevange          #+#    #+#             */
/*   Updated: 2025/01/10 16:57:10 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put_nbr(int cnt)
{
	char	*s;

	s = ft_itoa(cnt);
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
	free(s);
}

int ft_put_uns_nmb(unsigned int n)
{
	ft_putnbr((unsigned int)n);
}

int ft_put_pntr(unsigned long pnt, const char *s)
{

}

int ft_put_hex_nmb(unsigned int n, const char *s)
{
	
}