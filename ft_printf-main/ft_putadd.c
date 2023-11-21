/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:49:11 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/21 21:52:08 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_add(unsigned long int n, char x, int *len)
{
	unsigned long int	base_len;
	char				*base;

	base_len = 16;
	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < base_len)
		ft_putchar(base[n % base_len], len);
	else
	{
		ft_putnbr_add(n / base_len, x, len);
		ft_putnbr_add(n % base_len, x, len);
	}
}

void	ft_putadd(void *add, int *len)
{
	unsigned long int	p;

	p = (unsigned long int)add;
/*	if (p == 0)
	{
		ft_putstr("(nil)", len);
		return ;
	}*/
	ft_putstr("0x", len);
	ft_putnbr_add(p, 'x', len);
}
