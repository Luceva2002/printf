/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:18:48 by luevange          #+#    #+#             */
/*   Updated: 2025/01/10 12:17:02 by luevange         ###   ########.fr       */
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




