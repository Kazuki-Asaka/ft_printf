/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:08:54 by akazuki           #+#    #+#             */
/*   Updated: 2022/12/12 11:45:36 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *s)
{
	size_t	count;

	count = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s != '\0')
	{
		write (1, s, 1);
		s++;
		count++;
	}
	return (count);
}

// int main (void)
// {
// 	char s[100] = "Hellow";
// 	ft_putstr_fd(s,1);
// }