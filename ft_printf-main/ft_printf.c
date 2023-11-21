/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:46:48 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/21 21:47:26 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	flags(va_list args, const char flag, int *len)
{
	char	*str;
	void	*ptr;

	if (flag == '%')
	{
		ft_putchar(flag, len);
	}
	else if (flag == 'd' || flag == 'i')
	{
		ft_putnbr(va_arg(args, int), len);
	}
	else if(flag == 'f')
	{
		ft_putnbr_f(va_arg(args,double),len);
	}
	else if (flag == 'u')
	{
		ft_putnbr_u(va_arg(args, unsigned int), len);
	}
	else if (flag == 'c')
	{
		ft_putchar((char)va_arg(args, int), len);
	}
	else if (flag == 's')
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			ft_putstr(str, len);
		}
		else
			ft_putstr("(null)", len);
	}
	else if (flag == 'X' || flag == 'x')
	{
		ft_putnbr_base(va_arg(args, int), flag, len);
	}
	else if (flag == 'p')
	{
		ptr = va_arg(args, void *);
		ft_putadd(ptr, len);
	}
		else
			ft_putchar(flag,len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	if(format == NULL)
		return -1;
	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			flags(args, *format, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
