/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:21:32 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/07 17:11:21 by nabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_found_x(unsigned int n)
{
	int	i;
	char	str[] = "0123456789abcdef";
	
	i = 0;
	if (n / 16)
	{
		i = ft_found_x(n / 16);
		i = ft_found_x(n % 16);
	}
	else {
		write(1, str+(n), 1);
		++i;
	}
	return (i);
}

int	ft_found_X(unsigned int n)
{
	int	i;
	char	str[] = "0123456789ABCDEF";
	
	i = 0;
	if (n / 16)
	{
		i = ft_found_X(n / 16);
		i = ft_found_X(n % 16);
	}
	else {
		write(1, str+(n), 1);
		++i;
	}
	return (i);
}