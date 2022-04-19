/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:29:20 by frrusso           #+#    #+#             */
/*   Updated: 2021/12/13 14:52:51 by frrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>// close read write
# include <stdlib.h>// exit malloc free size_t
# include <stdarg.h>// va_start va_arg va_copy va_end

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* ***********************************LIBC*********************************** */

// ft_isalpha.c				1 functions
int		ft_isalpha(int c);

// ft_isdigit.c				1 functions
int		ft_isdigit(int c);

// ft_isalnum.c				1 functions
int		ft_isalnum(int c);

// ft_isascii.c				1 functions
int		ft_isascii(int c);

// ft_isprint.c				1 functions
int		ft_isprint(int c);

// ft_strlen				1 functions
size_t	ft_strlen(const char *s);

// ft_memset.c				1 functions
void	*ft_memset(void *s, int c, size_t n);

// ft_bzero.c				1 functions
void	ft_bzero(void *s, size_t n);

// ft_memcpy.c				1 functions
void	*ft_memcpy(void *dest, const void *src, size_t n);

// ft_memmove.c				1 functions
void	*ft_memmove(void *dest, const void *src, size_t n);

// ft_strlcpy.c				1 functions
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

// ft_strlcat.c				1 functions
size_t	ft_strlcat(char *dst, const char *src, size_t size);

// ft_toupper.c				1 functions
int		ft_toupper(int c);

// ft_tolower.c				1 functions
int		ft_tolower(int c);

// ft_strchr.c				1 functions
char	*ft_strchr(const char *s, int c);

// ft_strrchr.c				1 functions
char	*ft_strrchr(const char *s, int c);

// ft_strncmp.c				1 functions
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// ft_memchr.c				1 functions
void	*ft_memchr(const void *s, int c, size_t n);

// ft_memcmp.c				1 functions
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// ft_strnstr.c				1 functions
char	*ft_strnstr(const char *big, const char *little, size_t len);

// ft_atoi.c				2 functions
int		ft_space(char c);
int		ft_atoi(const char *nptr);

// ft_calloc.c				1 functions
void	*ft_calloc(size_t nmemb, size_t size);

// ft_strdup.c				1 functions
char	*ft_strdup(const char *s);

/* **********************************LIBFT*********************************** */

// ft_substr.c				2 functions
size_t	ft_subsize(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);

// ft_strjoin.c				4 functions
size_t	ft_joinstr(char const *s, char *str, int i);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char *s1, char const *s2);
char	*ft_strjoin_long(char *s1, char *s2, char *s3, char *s4);

// ft_strtrim.c				1 functions
char	*ft_strtrim(char const *s1, char const *set);

// ft_split.c				5 functions
char	**ft_split_free(char **str);
int		ft_split_count(char const *s, char c);
int		ft_split_len(char const *s, char c, int i);
char	*ft_split_input(char const *s, char c, int i);
char	**ft_split(char const *s, char c);

// ft_itoa.c				4 functions
int		ft_isneg(int n);
int		ft_dsize(unsigned int d);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);

// ft_strmapi.c				1 functions
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// ft_striteri.c			1 functions
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// ft_putchar_fd.c			1 functions
void	ft_putchar_fd(char c, int fd);

// ft_putstr_fd.c			1 functions
void	ft_putstr_fd(char *s, int fd);

// ft_putendl_fd.c			1 functions
void	ft_putendl_fd(char *s, int fd);

// ft_putnbr_fd.c			1 functions
void	ft_putnbr_fd(int n, int fd);

/* ***********************************LIST*********************************** */

// ft_lstnew.c				1 functions
t_list	*ft_lstnew(void *content);

// ft_lstadd_front.c		1 functions
void	ft_lstadd_front(t_list **alst, t_list *new);

// ft_lstsize.c				1 functions
int		ft_lstsize(t_list *lst);

// ft_lstlast.c				1 functions
t_list	*ft_lstlast(t_list *lst);

// ft_lstadd_back.c			1 functions
void	ft_lstadd_back(t_list **alst, t_list *new);

// ft_lstdelone.c			1 functions
void	ft_lstdelone(t_list *lst, void (*del)(void*));

// ft_lstclear.c			1 functions
void	ft_lstclear(t_list **lst, void (*del)(void*));

// ft_lstiter.c				1 functions
void	ft_lstiter(t_list *lst, void (*f)(void *));

// ft_lstmap				1 functions
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ******************************GET_NEXT_LINE******************************* */

// get_next_line.c			4 functions
char	*ft_read(int fd, char *tmp);
char	*ft_get_line(char *tmp);
char	*ft_save(char *tmp);
char	*get_next_line(int fd);

/* ********************************FT_PRINTF********************************* */

// ft_printf_utils.c		5 functions
int		ft_printf_put(char *s);
int		ft_printf_int(va_list list);
int		ft_printf_hex(long unsigned int hex, char c);
int		ft_printf_ptr(long unsigned int ptr);
int		ft_printf_uns(va_list list);

// ft_printf.c				2 functions
int		ft_conversion(char str, va_list list);
int		ft_printf(const char *str, ...);

#endif
