/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabil <nabil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:27:56 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/10 11:54:57 by nabil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	display_nbr(int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{	
		i += display_nbr((n / 10));

	}
	
	write(1, &"0123456789"[n % 10], 1);

	return (++i);
}

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		i += 11;
		return (i);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		++i;
		n *= -1;
	}
	 i += display_nbr(n);
	return (i);
}

int	ft_found_d(int s)
{
	int		i;

	i = ft_putnbr(s);	
	return (i);
}