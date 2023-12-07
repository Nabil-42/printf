/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:16:28 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/05 14:22:46 by nabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		++i;
	}
	return (i);
}

int	ft_putchar(int c)
{
	int	i;

	i = 0;
	write(1, &c, 1);
	++i;
	return (i);
}