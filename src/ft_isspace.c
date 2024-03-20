/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:27:31 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/19 16:29:11 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isspace(int ch)
{
	if ((ch >= 9 && ch <= 13) || ch == 32)
		return (1);
	return (0);
}
