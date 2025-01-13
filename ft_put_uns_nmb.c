/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uns_nmb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 02:23:15 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 02:29:21 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_uns_nmb(long long int n)
{
	char	*s;
	long long int		len;

	s = ft_itoall(n);
	if (!s)
		return (0);
	len = write(1, s, ft_strlen(s));
	free(s);
	return (len);
}