/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:03:52 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:00:42 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *str, char ch)
{
	unsigned int	c;

	c = 0;
	while (str[c] != ch && str[c] != '\0')
	{
		c++;
	}
	if (str[c] == ch)
	{
		return ((char *)&str[c]);
	}
	return (NULL);
}
