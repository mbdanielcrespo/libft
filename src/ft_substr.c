/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:23:59 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:51:20 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	c;
	char			*ss;

	if (start >= ft_strlen(s))
	{
		ss = malloc(sizeof(char));
		if (!ss)
			return (NULL);
		ss[0] = '\0';
		return (ss);
	}
	c = 0;
	while (s[c + start] != '\0' && c < len)
		c++;
	ss = malloc(sizeof(char) * (c + 1));
	if (!ss)
		return (NULL);
	c = 0;
	while (*(s + c + start) != '\0' && c < len)
	{
		*(ss + c) = *(s + c + start);
		c++;
	}
	ss[c] = '\0';
	return (ss);
}
/*
int	main()
{
	char	*str = "Lolazo";

	printf("Output -> %s\n", ft_substr(str, 2, 2));
	printf("Output -> %s\n", ft_substr(str, 0, 3));
	printf("Output -> %s\n", ft_substr(str, 1, 10));
}
*/
