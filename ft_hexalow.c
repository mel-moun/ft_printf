/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:21:41 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/29 15:43:01 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalow(size_t i)
{
	int		count;

	count = 0;
	if (i >= 0 && i <= 15)
		count = count + ft_putchar("0123456789abcdef"[i]);
	else
	{
		count = count + ft_hexalow(i / 16);
		count = count + ft_hexalow(i % 16);
	}
	return (count);
}
