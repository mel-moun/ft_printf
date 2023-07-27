/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:15:28 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/30 09:26:54 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd')
		return (1);
	if (c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	do_it(char op, va_list args)
{
	int	count;

	count = 0;
	if (op == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (op == 's')
		count += ft_putstr(va_arg(args, const char *));
	else if (op == 'p')
		count += ft_pointer(va_arg(args, unsigned long));
	else if (op == 'd' || op == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (op == 'u')
		count += ft_put_it(va_arg(args, unsigned int));
	else if (op == 'x')
		count += ft_hexalow(va_arg(args, unsigned int));
	else if (op == 'X')
		count += ft_hexaup(va_arg(args, unsigned int));
	else if (op == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int			i;
	int			count;
	va_list		args;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%' && check(s[i + 1]) == 1)
		{
			count += do_it(s[i + 1], args);
			i = i + 2;
		}
		else
		{
			while (s[i] != '%' && s[i] != '\0')
			{
				count += ft_putchar(s[i]);
				i++;
			}
		}
	}
	va_end(args);
	return (count);
}
