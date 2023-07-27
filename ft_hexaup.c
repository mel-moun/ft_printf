/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:52:33 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/29 15:43:17 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexaup(unsigned int i)
{
	int		count;

	count = 0;
	if (i >= 0 && i <= 15)
		count += ft_putchar ("0123456789ABCDEF"[i]);
	else
	{
		count += ft_hexaup(i / 16);
		count += ft_hexaup(i % 16);
	}
	return (count);
}
