/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:26:28 by luevange          #+#    #+#             */
/*   Updated: 2025/01/12 15:51:03 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include "libft/libft.h"

int ft_printf(const char *format, ...);
int	ft_put_char(char c);
int	ft_put_str(char *s);
int ft_put_pntr(unsigned long pnt, const char *s);
int	ft_put_nbr(int n);
int ft_put_hex_nmb(unsigned int n, const char *s);
int ft_put_uns_nmb(unsigned int n);

#endif