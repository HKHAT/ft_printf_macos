#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	s[] = "mehdi";
	int		a;
	int		u;
	int		c;
	char	*sr;
	void	*p;
	float f;
	f = 123.456789;
	a = 10;
	u = -2000;
	c = 'a';
	sr = NULL;
	p = NULL;
	ft_printf("message: %s\nnlstring : %s\n", s, sr);
	ft_printf("int = %d\n", a);
	printf("prn : %p\n", p);
	ft_printf("void add: %p\n var add: %p\n", p, &a);
	ft_printf("unisgned : %u\n integer :%i\n  flag d : %d\n", u, a, a);
	ft_printf("char : %c\n", c);
/*	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42, 42, 42, 42,
		'B', "-42", -42, -42, -42, -42, 42, 'C', "0", 0, 0, 0, 0, 42, 0);
*/	ft_printf("float: %f\n",f);
}
