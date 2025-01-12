/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:18:48 by luevange          #+#    #+#             */
/*   Updated: 2025/01/12 16:34:04 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_nbr(int cnt)
{
	char	*s;
	int 	len;
	
	s = ft_itoa(cnt);
	if (!s)
		return (0);
	len = write(1, s, ft_strlen(s));
	free(s);
	return (len);
		
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