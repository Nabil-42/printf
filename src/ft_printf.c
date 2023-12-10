/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabil <nabil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:46:24 by nabboud           #+#    #+#             */
/*   Updated: 2023/12/10 17:33:35 by nabil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_next_percent(const char *format, int i, int j, va_list args)
{
	if (format[j] == 'c')
		i += ft_found_c(va_arg(args, int));
	if (format[j] == 's')
		i += ft_found_s(va_arg(args, char *));
	if (format[j] == 'p')
		i += ft_found_p(va_arg(args, void *));
	if (format[j] == 'd' || format[j] == 'i')
		i += ft_found_d(va_arg(args, int));
	if (format[j] == 'u')
		i += ft_found_u(va_arg(args, unsigned int));
	if (format[j] == 'x')
		i += ft_found_x(va_arg(args, unsigned int));
	if (format[j] == 'X')
		i += ft_found_X(va_arg(args, unsigned int));
	if (format[j] == '%'){
		write(1, "%", 1);
		++i;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;
	int		o = 0;	
	
	i = 0;
	j = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
		{
			i += ft_next_percent(format, o, j + 1, args);
			j += 2;
		}
		else
		{
			++i;
			write(1, &format[j], 1);
			++j;
		}
	}
	va_end(args);
	return (i);
}


// int main(void)
// {
// 	int o = 0; 
// 	int i = 0;
// 	char c;
	
//     c = 'N';
//     i =ft_printf("Hello World\nMy name is %s, I'm a student at %i Paris based in %d.\nThe pointer on the first letter of my first name is %c\n42 is hexa is %x and in HEXA is %X, a little bonus for the unsigned one: %u\nThere is a percentage character: %%.\n", "Nabil", 4242, 75017, c, 42, 42, 1234567890);
//     printf("Return value : %d\n", i);
//     printf("\n-----------------------\n");
//     o =   printf("Hello World\nMy name is %s, I'm a student at %i Paris based in %d.\nThe pointer on the first letter of my first name is %c\n42 is hexa is %x and in HEXA is %X, a little bonus for the unsigned one: %u\nThere is a percentage character: %%.\n", "Nabil", 4242, 75017, c, 42, 42, 1234567890);
//     printf("Return value : %d\n", o);
//     return (0);
// }

// int	main()
// {
	
// 	int i;
// 	int p = -1;
	
// 	i = 0;
// 	i = ft_printf("%X", p);
// 	printf("faux printf: %d\n", i);

// 	i = printf("%X", p);
// 	printf("vrai printf: %d\n", i);
// }

// int	main(void)
// {
// 	int i;
// 	int *ptr;

// 	i = 42;
// 	ptr = &i;

// // 	ft_printf("me ----->\n hello 42 !  p: %p, d: %d, x: %x, i: %i\n",
// (void *)ptr, 42,
// 	// 		42, 042);
// 	// 	printf("real ----->\n hello 42 !  p: %p, d: %d, x: %x, i: %i\n",
// 	(void *)ptr, 42,
// 	// 		42, 042);
// 	// }
