/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:38:38 by nchairun          #+#    #+#             */
/*   Updated: 2025/03/24 08:33:40 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// ft_printf.c
int	ft_printf(const char *str, ...);
int	ft_printf_format(char specifier, va_list arg_ptr);

// ft_printf_digits.c
int	ft_printf_d(int n);
int	ft_printf_u(unsigned int n);

// ft_printf_hex.c
int	ft_printf_hex(unsigned long n);
int	ft_printf_hex_upper(unsigned long n);
int	ft_printf_p(void *ptr);
int	ft_printf_x(unsigned int n, char specifier);

// ft_printf_words.c
int	ft_printf_c(int c);
int	ft_printf_s(char *s);

#endif
