/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:53:02 by danalmei          #+#    #+#             */
/*   Updated: 2024/04/28 21:10:27 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <ft_printf.h>
# include <stdarg.h>
# include <get_next_line.h>

typedef long long	t_llong;
typedef long double	t_dlong;
typedef void		(*t_func_ptr)(void);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);
void	*ft_memset(void	*ptr, int ch, size_t n);
void	*ft_memcpy(void	*destptr, const void *srcptr, size_t n);
void	*ft_memchr(const void *s, int ch, size_t n);
void	*ft_memmove(void *destptr, const void *srcptr, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isspace(unsigned int ch);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *str, size_t n);
char	*ft_strchr(const char *str, char ch);
char	*ft_strrchr(const char *str, char ch);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char ch);
void	ft_fsplit(char **strs);
t_llong	ft_atoi(const char *str);
t_dlong	ft_atof(char *str);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
//void	ft_lstadd_back(t_list **lst, t_list *new);
//void	ft_lstadd_front(t_list **lst, t_list *new);
//void	ft_lstclear(t_list **lst, void (*del)(void *));
//void	ft_lstdelone(t_list *lst, void (*del)(void *));
//void	ft_lstiter(t_list *lst, void (*f)(void *));
//t_list	*ft_lstlast(t_list *lst);
//t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *));
//t_list	*ft_lstnew(int *content);
//t_i32	ft_lstsize(t_list *lst);
int		ft_printf(const char *str, ...);
int		ft_print_ptr(unsigned long ptr);
int		ft_putchar_fdp(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fdp(int n, int fd);
int		ft_putstr_fdp(char *s, int fd);
int		ft_pow(int num, int pow);
void	ft_swap(int *x, int *y);
void	ft_error(char *msg);
void	ft_error_destroy(char *msg, void (*func)(void));
void	*ft_safe_malloc(size_t size, void (*func)(void), void **ptr);

#endif
