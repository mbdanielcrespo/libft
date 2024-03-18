/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:27:49 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:18:22 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static unsigned int	is_in_set(char ch, const char *set)
{
	unsigned int	c;

	c = 0;
	while (set[c] != '\0')
	{
		if (set[c] == ch)
		{
			return (1);
		}
		c++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	c;
	char	*res;

	c = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	res = (char *)ft_calloc((end - start + 1), sizeof(char));
	if (!res)
		return (NULL);
	while (start < end)
	{
		res[c] = s1[start];
		c++;
		start++;
	}
	res[c] = '\0';
	return (res);
}
