/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:23:19 by mel-moun          #+#    #+#             */
/*   Updated: 2022/10/30 09:35:34 by mel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_put_it(unsigned int i);
int	ft_hexalow(size_t i);
int	ft_hexaup(unsigned int i);
int	ft_pointer(unsigned long i);

#endif
