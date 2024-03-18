/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:11:58 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:49:22 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				c;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	c = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (c < n)
	{
		if (ss1[c] != ss2[c])
			return (ss1[c] - ss2[c]);
		c++;
	}
	return (0);
}
