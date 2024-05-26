/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:33:43 by akazuki           #+#    #+#             */
/*   Updated: 2022/12/14 16:50:52 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_format_di(const char *str, va_list *ap)
{
	int	num;

	num = va_arg(*ap, int);
	if (*str == 'd' || *str == 'i')
		return (ft_putnbr(num));
	return (0);
}

size_t	ft_format_u(const char *str, va_list *ap)
{
	unsigned int	num;

	num = va_arg(*ap, unsigned int);
	if (*str == 'u')
	{
		return (ft_putnbr_u(num));
	}
	return (0);
}

size_t	ft_format_c(const char *str, va_list *ap)
{
	int	sp;

	if (*str == 'c')
	{
		sp = va_arg(*ap, int);
		return (ft_putchar(sp));
	}
	return (0);
}

size_t	ft_format_sp(const char *str, va_list *ap)
{
	char	*st;

	st = va_arg(*ap, char *);
	if (*str == 's')
	{
		return (ft_putstr(st));
	}
	return (0);
}
