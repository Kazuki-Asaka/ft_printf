/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:35:18 by akazuki           #+#    #+#             */
/*   Updated: 2022/12/16 19:16:13 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static size_t	ft_formatcheck(const char *str, va_list *ap)
{
	if (*str == 'c')
		return (ft_format_c(str, ap));
	else if (*str == 's')
		return (ft_format_sp(str, ap));
	else if (*str == 'p')
		return (ft_format_p(str, ap));
	else if (*str == 'd')
		return (ft_format_di(str, ap));
	else if (*str == 'i')
		return (ft_format_di(str, ap));
	else if (*str == 'u')
		return (ft_format_u(str, ap));
	else if (*str == 'x')
		return (ft_format_xlx(str, ap));
	else if (*str == 'X')
		return (ft_format_xlx(str, ap));
	else if (*str == '%')
		return (ft_putchar('%'));
	return (0);
}

static size_t	ft_putchar_len(const char *str)
{
	write(1, str, 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	size_t		len;

	len = 0;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			if (*str++ != '\0')
			{
				len = len + ft_formatcheck (str, &ap);
				str++;
			}
			else
				break ;
		}
		else
		{
			len = len + ft_putchar_len(str);
			str++;
		}
	}
	va_end (ap);
	return (len);
}

// #include<limits.h>
// int	main()
// {
// 	int len1 = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%);
// 	int len2 = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%);
// 	// int len1 = ft_printf("%%%d\n", 12);
// 	// int len2 = printf("%%%d\n", 12);

// 	printf("len: %d  \n", len1);
// 	printf("len: %d \n", len2);
// }