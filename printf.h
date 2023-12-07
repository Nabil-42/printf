/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabboud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:34:16 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/07 17:12:03 by nabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF
# define PRINTF
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "printf.h"

int	ft_printf(const char *format, ... );
int	ft_putnbr(int s);
int	ft_found_d(int s);
int	ft_found_s(char *s);
int	ft_found_c(int c);
int	ft_found_p(void *ptr);
int	ft_putchar(int	c);
int	ft_putstr(char *s);
int	ft_found_x(unsigned int n);
int	ft_found_X(unsigned int n);
int	ft_found_u(unsigned int s);
int	Udisplay_nbr(unsigned int n);

#endif
