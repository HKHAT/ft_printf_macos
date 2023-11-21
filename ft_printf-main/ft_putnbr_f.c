#include "ft_printf.h"

void ft_putnbr_f(double num,int *len)
{
    int i;
    int integerPart;
    int digit;
    float fractionalPart;
    i = 0;

    // Print the integer part of the float
    integerPart = (int)num;
    ft_putnbr(integerPart,len);

    // Print the decimal point
    ft_putchar('.',len);

    // Print the fractional part of the float
    fractionalPart = (float)num - integerPart;
    while ( i < 6) { // You can adjust the number of decimal places as needed
        fractionalPart *= 10;
         digit = (int)fractionalPart;
        ft_putchar('0' + digit,len);
        fractionalPart -= digit;
        i++;
    }
}
