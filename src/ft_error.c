/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:34:06 by danalmei          #+#    #+#             */
/*   Updated: 2024/04/28 21:09:29 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_error(char *msg)
{
	ft_printf("Error: %s\n", msg);
	exit(1);
}

void	ft_error_destroy(char *msg, void (*func)(void))
{
	if (func)
		func();
	if (msg)
		ft_printf("Error: %s\n", msg);
	exit(1);
}

void	*ft_safe_malloc(size_t size, void (*func)(void), void **ptr)
{
	void	*ret;
	int		c;

	c = 0;
	ret = malloc(size);
	if (!ret)
	{
		while (ptr[c])
			free(ptr[c++]);
		ft_error_destroy("Malloc Failed!", func);
	}
	return (ret);
}
