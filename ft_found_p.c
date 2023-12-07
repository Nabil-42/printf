/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:14:14 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/07 17:09:48 by nabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_printadress(const unsigned long adress)
{
	int	i;

	i = 0;
	if (adress / 16)
		return (ft_printadress(adress / 16) + ft_printadress(adress % 16));
	if (!(adress / 10))
	{
		ft_putchar(adress + '0');
		++i;
	}
	else
	{
		ft_putchar(adress - 10 + 'a');
		++i;
	}
	return (i);
}

int	ft_found_p(void *adress)
{	
	if (!adress)
	{
		return (ft_putstr("(nil)"));
	}
	ft_putstr("0x");
	return (2 + ft_printadress((unsigned long)adress));
}