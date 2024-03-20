/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:46:49 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/20 18:47:26 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_dlong	ft_atof(char *str)
{
	t_dlong	res;
	t_dlong	fraction;
	t_dlong	sign;
	int		c;

	sign = 1.0f;
	fraction = 0.1f;
	c = 0;
	res = (t_dlong)ft_atoi(str);
	while (ft_isspace(str[c]))
		c++;
	if (str[c++] == '-' && res == 0)
		sign = -1.0f;
	while (str[c] <= '9' && str[c] >= '0')
		c++;
	if (str[c] == '.')
	{
		c++;
		while (str[c] <= '9' && str[c] >= '0')
		{
			res += (str[c++] - '0') * fraction;
			fraction *= 0.1f;
		}
	}
	return (res * sign);
}
