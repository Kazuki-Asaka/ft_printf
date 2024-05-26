/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:30:59 by akazuki           #+#    #+#             */
/*   Updated: 2022/12/12 11:53:24 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_format_p(const char *str, va_list *ap)
{
	unsigned long long	tmp;

	if (*str == 'p')
	{
		tmp = va_arg(*ap, unsigned long long);
		return (ft_base(tmp));
	}
	return (0);
}

size_t	ft_format_xlx(const char *str, va_list *ap)
{
	unsigned int	num;

	num = va_arg(*ap, unsigned int);
	if (*str == 'x')
	{
		return (ft_base_x(num));
	}
	else if (*str == 'X')
	{
		return (ft_base_lx(num));
	}
	return (0);
}
