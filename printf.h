/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:26:28 by luevange          #+#    #+#             */
/*   Updated: 2025/01/13 03:21:46 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

char *ft_itoall(long long int nb);
int	ft_printf(const char *format, ...);
int	ft_put_char(char c);
int	ft_put_str(char *s);
int	ft_put_pntr(unsigned long pnt);
int	ft_put_nbr(int n);
int	ft_put_hex_nmb(unsigned int n, const char *s);
int	ft_put_uns_nmb(long long int n);
size_t	ft_strlen(const char *s1);

#endif