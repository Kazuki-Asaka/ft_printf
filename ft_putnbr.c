/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:18:24 by akazuki           #+#    #+#             */
/*   Updated: 2022/12/12 11:35:55 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int n)
{
	long int	x;
	int			i;
	int			j;
	size_t		count;

	count = 0;
	x = n;
	if (x < 0)
	{
		x = -x;
		write(1, "-", 1);
		count++;
	}
	i = x / 10;
	j = x % 10;
	if (i != 0)
	{
		count += ft_putnbr(i);
	}
	j = j + '0';
	write (1, &j, 1);
	count++;
	return (count);
}

size_t	ft_putnbr_u(unsigned int n)
{
	long int		x;
	unsigned int	i;
	unsigned int	j;
	size_t			count;

	count = 0;
	x = n;
	if (x < 0)
	{
		x = -x;
		write(1, "-", 1);
		count++;
	}
	i = x / 10;
	j = x % 10;
	if (i != 0)
	{
		count += ft_putnbr(i);
	}
	j = j + '0';
	write (1, &j, 1);
	count++;
	return (count);
}
