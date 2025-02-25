/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:26:28 by luevange          #+#    #+#             */
/*   Updated: 2025/01/14 16:33:14 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_put_char(char c);
int		ft_put_str(char *s);
int		ft_put_pntr(unsigned long pnt);
int		ft_put_nbr(int n);
int		ft_put_hex_nmb(unsigned int n, const char *s);
int		ft_put_uns_nmb(long long int n);

#endif