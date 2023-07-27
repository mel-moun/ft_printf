/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_it.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:21:57 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/29 09:00:54 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_it(unsigned int i)
{
	int		count;

	count = 0;
	if (i >= 0 && i <= 9)
		count += ft_putchar(i + 48);
	else
	{
		count += ft_put_it(i / 10);
		count += ft_put_it(i % 10);
	}
	return (count);
}
