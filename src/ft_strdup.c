/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:23:39 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 13:03:34 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *str)
{
	int		c;
	char	*cpy;

	c = 0;
	while (str[c] != '\0')
		c++;
	cpy = (char *)malloc(sizeof(char) * (c + 1));
	if (!cpy)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
	{
		cpy[c] = str[c];
		c++;
	}
	cpy[c] = '\0';
	return (cpy);
}
