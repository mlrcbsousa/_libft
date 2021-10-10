# Libft

**Version: October 2021**

Libft used for each project **after** the `libft` project.

## Quick Links

### Part 1

- [`void  *ft_memset(void *str, int c, size_t n);`](/ft_memset.c)
- [`void	ft_bzero(void *s, size_t n);`](/ft_bzero.c)
- [`void	*ft_memcpy(void *dest, const void *src, size_t n);`](/ft_memcpy.c)
- [`void	*ft_memccpy(void *dest, const void *src, int c, size_t n);`](/ft_memccpy.c)
- [`void	*ft_memmove(void *dest, const void *src, size_t n);`](/ft_memmove.c)
- [`void	*ft_memchr(const void *str, int c, size_t n);`](/ft_memchr.c)
- [`int ft_memcmp(const void *str1, const void *str2, size_t n);`](/ft_memcmp.c)
- [`size_t	ft_strlen(const char *str);`](/ft_strlen.c)
- [`size_t	ft_strlcpy(char *dst, const char *src, size_t size);`](/ft_strlcpy.c)
- [`size_t	ft_strlcat(char *dst, const char *src, size_t size);`](/ft_strlcat.c)
- [`char	*ft_strchr(const char *str, int c);`](/ft_strchr.c)
- [`char	*ft_strrchr(const char *str, int c);`](/ft_strrchr.c)
- [`char	*ft_strnstr(const char *haystack, const char *needle, size_t len);`](/ft_strnstr.c)
- [`int ft_strncmp(const char *s1, const char *s2, size_t n);`](/ft_strncmp.c)
- [`int ft_atoi(const char *str);`](/ft_atoi.c)
- [`int ft_isalpha(int c);`](/ft_isalpha.c)
- [`int ft_isdigit(int c);`](/ft_isdigit.c)
- [`int ft_isalnum(int c);`](/ft_isalnum.c)
- [`int ft_isascii(int c);`](/ft_isascii.c)
- [`int ft_isprint(int c);`](/ft_isprint.c)
- [`int ft_toupper(int c);`](/ft_toupper.c)
- [`int ft_tolower(int c);`](/ft_tolower.c)
- [`void  *ft_calloc(size_t nmemb, size_t size);`](/ft_calloc.c)
- [`char  *ft_strdup(const char *s1);`](/ft_strdup.c)

### Part 2

- [`char  *ft_substr(char const *s, unsigned int start, size_t len);`](/ft_substr.c)
- [`char	*ft_strjoin(char const *s1, char const *s2);`](/ft_strjoin.c)
- [`char	*ft_strtrim(char const *s1, char const *set);`](/ft_strtrim.c)
- [`char	**ft_split(char const *s, char c);`](/ft_split.c)
- [`char	*ft_itoa(int n);`](/ft_itoa.c)
- [`char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));`](/ft_strmapi.c)
- [`void  ft_putchar_fd(char c, int fd);`](/ft_putchar_fd.c)
- [`void  ft_putstr_fd(char const *s, int fd);`](/ft_putstr_fd.c)
- [`void	ft_putendl_fd(char const *s, int fd);`](/ft_putendl_fd.c)
- [`void	ft_putnbr_fd(int nb, int fd);`](/ft_putnbr_fd.c)

### Bonus

- [`t_list  *ft_lstnew(void *content);`](/ft_lstnew.c)
- [`void  ft_lstadd_front(t_list **lst, t_list *new);`](/ft_lstadd_front.c)
- [`int ft_lstsize(t_list *lst);`](/ft_lstsize.c)
- [`t_list  *ft_lstlast(t_list *lst);`](/ft_lstlast.c)
- [`void  ft_lstadd_back(t_list **lst, t_list *new);`](/ft_lstadd_back.c)
- [`void  ft_lstdelone(t_list *lst, void (*del)(void *));`](/ft_lstdelone.c)
- [`void  ft_lstclear(t_list **lst, void (*del)(void	*));`](/ft_lstclear.c)
- [`void  ft_lstiter(t_list *lst, void (*f)(void *));`](/ft_lstiter.c)
- [`t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`](/ft_lstmap.c)

### Added

- [`char  *ft_strcpy(char *dst, const char *src);`](/ft_strcpy.c)
- [`int ft_strnchr(const char *str, int c);`](/ft_strnchr.c)
- [`int ft_isspace(char c);`](/ft_isspace.c)
- [`char  *ft_uitoa(unsigned int n);`](/ft_uitoa.c)
- [`int get_next_line(int fd, char **line);`](/get_next_line.c)
- [`int ft_ternary(int condition, int a, int b);`](/ft_ternary.c)
- [`int ft_abs(int n);`](/ft_abs.c)
- [`size_t  ft_ullen(unsigned long nbr);`](/ft_ullen.c)
- [`size_t  ft_ullen_base(unsigned long nbr, int base);`](/ft_ullen_base.c)
- [`void  ft_putnbr_base(long long nb, char *radix);`](/ft_putnbr_base.c)
- [`void  ft_putchar(char c);`](/ft_putchar.c)
- [`void  ft_putstr(char *str);`](/ft_putstr.c)
- [`char  *ft_ultoa_base(unsigned long n, char *radix);`](/ft_ultoa_base.c)
