/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:18:48 by luevange          #+#    #+#             */
/*   Updated: 2025/01/09 16:17:19 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n, int cnt)
{
	char	*s;

	s = ft_itoa(n);
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	free(s);
}


