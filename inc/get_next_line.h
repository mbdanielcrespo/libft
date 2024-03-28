/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:01:45 by danalmei          #+#    #+#             */
/*   Updated: 2024/03/28 10:54:44 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <libft.h>

int		gnl_ft_strlen(char *str);
char	*gnl_ft_strjoin(char *s1, char *s2);
int		gnl_separate_buffer(char *buff);
char	*get_next_line(int fd);

#endif
