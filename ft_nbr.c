/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:18:48 by luevange          #+#    #+#             */
/*   Updated: 2025/01/12 19:25:10 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_put_nbr(int n)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	if (!s)
		return (0);
	len = write(1, s, ft_strlen(s));
	free(s);
	return (len);
}

int	ft_put_uns_nmb(unsigned int n)
{
	char	*s;
	int		len;

	s = ft_itoa((int)n);
	if (!s)
		return (0);
	len = write(1, s, ft_strlen(s));
	free(s);
	return (len);
}

int	ft_put_pntr(unsigned long pnt, const char *s)
{
	int	len;

	len = write(1, "0x", 2);
	len += ft_put_hex_nmb(pnt, s);
	return (len);
}

int	ft_put_hex_nmb(unsigned int n, const char *s)
{
	char hex[16];
	int len;
	int i;

	i = 0;
	if (i == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		hex[i++] = s[n % 16];
		n = n / 16;
	}
	len = i;
	while (--i >= 0)
		write(1, &hex[i], 1);
	return (len);
}