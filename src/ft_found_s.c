/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabil <nabil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:31:08 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/10 17:38:07 by nabil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_found_s(char *s)
{
	int	i;

	i = 0;
	if(!s)
	{
		i = 6;
		ft_putstr("(null)");
		return(i);
	}
		
	while (s[i])
	{
		ft_putchar(s[i]);
		++i;
	}
	return (i);
}