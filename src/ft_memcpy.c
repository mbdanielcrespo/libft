/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:45:45 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:00:42 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *destptr, const void *srcptr, size_t n)
{
	char	*dest;
	char	*src;
	size_t	c;

	c = 0;
	if (!destptr && !srcptr)
		return (NULL);
	dest = (char *)destptr;
	src = (char *)srcptr;
	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
