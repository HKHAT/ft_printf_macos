#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *format,...);
void	ft_putnbr(int nb,int *len);
void	ft_putnbr_u(unsigned int n,int *len);
void	ft_putchar(char c,int *len);
void	ft_putstr(char *str,int *len);
void	ft_putnbr_base(unsigned int n,char check,int *len);
void	ft_putadd(void *add,int *len);
void	ft_putnbr_f(double num,int *len);
#endif
