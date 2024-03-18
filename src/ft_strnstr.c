/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:03:51 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:00:42 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *str, size_t n)
{
	size_t	c;
	size_t	w;

	c = 0;
	if (*str == '\0' || !str)
		return ((char *)big);
	while (big[c] != '\0' && c < n)
	{
		w = 0;
		while (big[c + w] == str[w] && (c + w) < n)
		{
			if (str[w + 1] == '\0')
			{
				return ((char *)&big[c]);
			}
			w++;
		}
		c++;
	}
	return (NULL);
}
