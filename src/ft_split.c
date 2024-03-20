/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:23:59 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/20 12:22:48 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_count_words(char const *s, char ch)
{
	int	c;
	int	w;

	c = 0;
	w = 0;
	if (ch == '\0')
		return (1);
	while (s[c] != '\0')
	{
		while (s[c] == ch)
			c++;
		if (s[c] != '\0')
			w++;
		while (s[c] != ch && s[c])
			c++;
	}
	return (w);
}

static char	*ft_wrdup(char const *s, char ch, char **strs)
{
	int		c;
	char	*str;

	c = 0;
	while (s[c] != ch && s[c] != '\0')
		c++;
	str = (char *)malloc((c + 1) * sizeof(char));
	if (!str)
		return (NULL);
	c = 0;
	while (s[c] != ch && s[c] != '\0')
	{
		str[c] = s[c];
		c++;
	}
	str[c] = '\0';
	*strs = str;
	return ((char *)s + c);
}

char	**ft_split(char const *s, char ch)
{
	char	**strz;
	char	**strs;

	strs = (char **)malloc((ft_count_words(s, ch) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strz = strs;
	if (*s != '\0' && ch == '\0')
	{
		*strs++ = ft_strdup((char *)s);
		*strs = NULL;
		return (strz);
	}
	while (*s != '\0' && ch != '\0')
	{
		if (*s != '\0' && *s != ch)
			s = ft_wrdup(s, ch, strs++);
		while (*s == ch)
			s++;
	}
	*strs = NULL;
	return (strz);
}

void	ft_fsplit(char **strs)
{
	int	c;

	c = 0;
	if (strs)
	{
		while (strs[c])
			free(strs[c++]);
		free(strs);
	}
}
