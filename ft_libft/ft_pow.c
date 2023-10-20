# include "libft.h"

int ft_pow(int num, int pow)
{
    if (pow)
        return (num * ft_pow(num, pow - 1));
    else
        return (1);
}