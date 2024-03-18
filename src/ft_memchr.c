/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:01:37 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:49:12 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int ch, size_t n)
{
	size_t			c;
	unsigned char	*str;
	unsigned char	chr;

	c = 0;
	str = (unsigned char *)s;
	chr = (unsigned char)ch;
	while (c < n)
	{
		if (str[c] == chr)
		{
			return (&str[c]);
		}
		c++;
	}
	return (NULL);
}
