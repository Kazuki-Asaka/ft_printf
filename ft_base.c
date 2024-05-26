/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:36:58 by akazuki           #+#    #+#             */
/*   Updated: 2022/12/12 11:52:51 by akazuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_count(unsigned long long n)
{
	size_t	count;

	count = 0;
	while (n / 16 != 0)
	{
		count++;
		n = n / 16;
	}
	count++;
	return (count);
}

size_t	ft_base(unsigned long long n)
{
	size_t	count;
	size_t	countmp;
	char	*tmp;
	char	*s;

	tmp = malloc(sizeof(char) * ft_count(n) + 1);
	if (tmp == NULL)
		return (0);
	count = ft_count(n);
	countmp = count;
	s = tmp;
	write(1, "0x", 2);
	while (count-- != 0)
	{
		if (n % 16 < 10)
			*tmp = n % 16 + '0';
		else
			*tmp = (n % 16) + 'a' - 10;
		n = n / 16;
		tmp++;
	}
	while (tmp-- > s)
		write (1, tmp, 1);
	free (s);
	return (countmp + 2);
}

size_t	ft_base_x(unsigned int n)
{
	size_t	count;
	size_t	countmp;
	char	*tmp;
	char	*s;

	tmp = malloc(sizeof(char) * ft_count(n) + 1);
	if (tmp == NULL)
		return (0);
	count = ft_count(n);
	countmp = count;
	s = tmp;
	while (count-- != 0)
	{
		if (n % 16 < 10)
			*tmp = (n % 16) + '0';
		else
			*tmp = n % 16 + 'a' - 10;
		n = n / 16;
		tmp++;
	}
	while (tmp-- > s)
		write (1, tmp, 1);
	free (s);
	return (countmp);
}

size_t	ft_base_lx(unsigned int n)
{
	size_t	count;
	size_t	countmp;
	char	*tmp;
	char	*s;

	tmp = malloc(sizeof(char) * ft_count(n) + 1);
	if (tmp == NULL)
		return (0);
	count = ft_count(n);
	countmp = count;
	s = tmp;
	while (count-- != 0)
	{
		if (n % 16 < 10)
			*tmp = (n % 16) + '0';
		else
			*tmp = n % 16 + 'A' - 10;
		n = n / 16;
		tmp++;
	}
	while (tmp-- > s)
		write (1, tmp, 1);
	free (s);
	return (countmp);
}
