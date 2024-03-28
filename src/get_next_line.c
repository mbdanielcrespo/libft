/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:01:38 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/28 10:55:38 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

int	gnl_ft_strlen(char *str)
{
	int	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c])
		c++;
	return (c);	
}

char	*gnl_ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	int	len1 = gnl_ft_strlen(s1);
	int	len2 = gnl_ft_strlen(s2);
	int	i = 0;
	int	j = 0;

	new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_str)
		return (NULL);
	while (s1 && s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_str[i] = s2[j];
		if (s2[j] == '\n')
		{
			i++;
			break;
		}
		i++;
		j++;
	}	
	new_str[i] = '\0';
	free(s1);
	return (new_str);
}

int	gnl_separate_buffer(char *buff)
{
	int	nl = 0, i = 0, j = 0;
	while (buff[i])
	{
		if (nl)
			buff[j++] = buff[i];
		if (buff[i] == '\n')
			nl = 1;
		buff[i] = '\0';
		i++;
	}
	return (nl);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line = NULL;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		if (!*buffer && !read(fd, buffer, BUFFER_SIZE))
			break;
		line = gnl_ft_strjoin(line, buffer);
		if (gnl_separate_buffer(buffer))
			break;
	}
	return (line);
}
