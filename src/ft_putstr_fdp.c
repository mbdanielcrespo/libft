/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:45:31 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:00:42 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_putstr_fdp(char *s, int fd)
{
	int	c;

	if (!s || fd < 0)
		return (ft_putstr_fdp("(null)", fd));
	write(fd, s, ft_strlen(s));
	c = ft_strlen(s);
	return (c);
}
