/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:52:32 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/18 12:00:42 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, char u_ch)
{
	size_t	len;
	char	*last;

	last = NULL;
	len = ft_strlen(str);
	if (!u_ch)
		return ((char *)&str[len]);
	while (len > 0)
	{
		len--;
		if (str[len] == u_ch)
		{
			last = (char *)&str[len];
			return (last);
		}
	}
	return (last);
}
