/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:31:08 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/07 17:10:06 by nabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_found_s(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		write(1, &(*s), 1);
		++i;
		++s;
	}
	return (i);
}