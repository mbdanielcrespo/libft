/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:07:19 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:00:42 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static unsigned int	ft_isspace(unsigned int ch)
{
	if (ch == 9 || ch == 10 || ch == 11
		|| ch == 12 || ch == 13 || ch == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	c;
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	c = 0;
	while (ft_isspace(str[c]))
	{
		c++;
	}
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
		{
			sign *= -1;
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = res * 10 + (str[c] - '0');
		c++;
	}
	return ((int)(sign * res));
}
/*
int	main()
{
	int	a = 40;
	int	b = -345;
	int	c = -2147483648;

	printf("Outputs -> %s, %s, %s\n", a, b c);
}
*/
