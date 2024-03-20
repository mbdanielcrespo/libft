/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:34:06 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/20 12:41:46 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_error(char *msg)
{
	ft_printf("Error: %s\n", msg);
	exit(1);
}

void	ft_error_destroy(char *msg, void (*func)(void), void *ptr)
{
	if (ptr)
		free(ptr);
	if (func)
		func();
	ft_printf("Error: %s\n", msg);
	exit(1);
}
