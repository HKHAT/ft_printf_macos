/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:48:48 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/21 22:14:18 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	if (str == NULL)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (str && *str)
	{
		ft_putchar(*str, len);
		str++;
	}
}
