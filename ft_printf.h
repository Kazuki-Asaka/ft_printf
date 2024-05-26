/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:16:09 by akazuki           #+#    #+#             */
/*   Updated: 2022/12/16 19:49:01 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

size_t	ft_base(unsigned long long n);
size_t	ft_base_x(unsigned int n);
size_t	ft_base_lx(unsigned int n);
size_t	ft_format_di(const char *str, va_list *ap);
size_t	ft_format_u(const char *str, va_list *ap);
size_t	ft_format_c(const char *str, va_list *ap);
size_t	ft_format_sp(const char *str, va_list *ap);
size_t	ft_format_p(const char *str, va_list *ap);
size_t	ft_format_xlx(const char *str, va_list *ap);
int		ft_printf(const char *str, ...);
size_t	ft_putchar(char c);
size_t	ft_putnbr(int n);
size_t	ft_putnbr_u(unsigned int n);
size_t	ft_putstr(char *s);

#endif		