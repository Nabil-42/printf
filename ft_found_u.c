/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:16:55 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/07 17:12:19 by nabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_found_u(unsigned int n)
{
	return (Udisplay_nbr(n));
}

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