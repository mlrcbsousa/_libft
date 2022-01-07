/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <msousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 23:15:21 by manuel            #+#    #+#             */
/*   Updated: 2022/01/07 14:24:19 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <errno.h>
# include <limits.h>
# include "ft_printf.h"
# include "ft_boolean.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

# ifndef STDIN
#  define STDIN 0
# endif

# ifndef STDOUT
#  define STDOUT 1
# endif

# ifndef STDERR
#  define STDERR 2
# endif

# define DECIMAL "0123456789"
# define HEX "0123456789abcdef"
# define HEXU "0123456789ABCDEF"
# define BINARY "01"
# define OCTAL "01234567"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// libft Part 1
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_atoi(const char *str);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s1);

// libft Part 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int nb, int fd);

// libft Bonus
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void	*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// libft Added
char	*ft_strcpy(char *dst, const char *src);
int		ft_strnchr(const char *str, int c);
int		ft_isspace(char c);

// Added for get_next_line
int		get_next_line(int fd, char **line);

// Added for ft_printf
char	*ft_uitoa(unsigned int n);
int		ft_ternary(int condition, int a, int b);
int		ft_abs(int n);
size_t	ft_ullen(unsigned long nbr);
size_t	ft_ullen_base(unsigned long nbr, int base);
void	ft_putnbr_base(long long nb, char *radix);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_ultoa_base(unsigned long n, char *radix);

// Added for fractol
int		ft_strcmp(const char *s1, const char *s2);
t_bool	ft_streq(char const *s1, char const *s2);
long	ft_pow(int nb, int power);
double	ft_fabs(double n);
double	ft_atof(char *str);
t_bool	ft_isfloat(char *str);

// Added for minitalk
t_bool	ft_isnumber(char *str);
void	ft_putendl(char *str);

// Added for push_swap
long	ft_atol(const char *str);
t_list	*ft_lstfind(t_list *list, void *data, int (*cmp)());

#endif
