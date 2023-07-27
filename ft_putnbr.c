/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:13:21 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/29 15:46:39 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int			count;
	long		i;

	i = n;
	count = 0;
	if (i < 0)
	{
		write (1, "-", 1);
		i = i * (-1);
		count++;
	}
	if (i >= 0 && i <= 9)
		count += ft_putchar(i + 48);
	else
	{
		count += ft_putnbr(i / 10);
		count += ft_putnbr(i % 10);
	}
	return (count);
}
