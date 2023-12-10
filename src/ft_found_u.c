/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabil <nabil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:16:55 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/10 11:54:46 by nabil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	Udisplay_nbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i = Udisplay_nbr((n / 10));
	write(1, &"0123456789"[n % 10], 1);
	++i;
	return (i);
}

int	ft_found_u(unsigned int n)
{
	return (Udisplay_nbr(n));
}
