/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:50:07 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:48:53 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_count_int(signed long long int n, int *sign)
{
	int	c;

	c = 0;
	*sign = 0;
	if (n < 0)
	{
		*sign = 1;
		c++;
		n = -n;
	}
	if (n == 0)
	{
		c = 1;
		*sign = -1;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static void	ft_iterate(char *str, int len, long long nb)
{
	while (nb > 0)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int			sign;
	long long	nb;
	int			len;
	char		*str;

	nb = n;
	len = ft_count_int(nb, &sign);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (sign && (sign != -1))
	{
		nb = -nb;
		str[0] = '-';
	}
	else if (sign == -1)
		str[0] = '0';
	str[len--] = '\0';
	ft_iterate(str, len, nb);
	return (str);
}
/*
int	main()
{
	printf("Output -> %s, %s, %s, %s, %s\n", ft_itoa(0), ft_itoa(40)
	, ft_itoa(-45), ft_itoa(-2147483648), ft_itoa(2147483647));
}
*/
