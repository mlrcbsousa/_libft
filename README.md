<style>
  li:before { content: '🔗'; margin-left: -20px; margin-right: 10px; }
</style>

# Libft

**Version: October 2021**

Libft used for each project **after** the `libft` project.

## Quick Links

### Part 1

- [🔗](/ft_memset.c)
  ```c
  void  *ft_memset(void *str, int c, size_t n);
  ```
- [🔗](/ft_bzero.c)
  ```c
  void	ft_bzero(void *s, size_t n);
  ```
- [🔗](/ft_memcpy.c)
  ```c
  void	*ft_memcpy(void *dest, const void *src, size_t n);
  ```
- [🔗](/ft_memccpy.c)
  ```c
  void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
  ```
- [🔗](/ft_memmove.c)
  ```c
  void	*ft_memmove(void *dest, const void *src, size_t n);
  ```
- [🔗](/ft_memchr.c)
  ```c
  void	*ft_memchr(const void *str, int c, size_t n);
  ```
- [🔗](/ft_memcmp.c)
  ```c
  int ft_memcmp(const void *str1, const void *str2, size_t n);
  ```
- [🔗](/ft_strlen.c)
  ```c
  size_t	ft_strlen(const char *str);
  ```
- [🔗](/ft_strlcpy.c)
  ```c
  size_t	ft_strlcpy(char *dst, const char *src, size_t size);
  ```
- [🔗](/ft_strlcat.c)
  ```c
  size_t	ft_strlcat(char *dst, const char *src, size_t size);
  ```
- [🔗](/ft_strchr.c)
  ```c
  char	*ft_strchr(const char *str, int c);
  ```
- [🔗](/ft_strrchr.c)
  ```c
  char	*ft_strrchr(const char *str, int c);
  ```
- [🔗](/ft_strnstr.c)
  ```c
  char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
  ```
- [🔗](/ft_strncmp.c)
  ```c
  int ft_strncmp(const char *s1, const char *s2, size_t n);
  ```
- [🔗](/ft_atoi.c)
  ```c
  int ft_atoi(const char *str);
  ```
- [🔗](/ft_isalpha.c)
  ```c
  int ft_isalpha(int c);
  ```
- [🔗](/ft_isdigit.c)
  ```c
  int ft_isdigit(int c);
  ```
- [🔗](/ft_isalnum.c)
  ```c
  int ft_isalnum(int c);
  ```
- [🔗](/ft_isascii.c)
  ```c
  int ft_isascii(int c);
  ```
- [🔗](/ft_isprint.c)
  ```c
  int ft_isprint(int c);
  ```
- [🔗](/ft_toupper.c)
  ```c
  int ft_toupper(int c);
  ```
- [🔗](/ft_tolower.c)
  ```c
  int ft_tolower(int c);
  ```
- [🔗](/ft_calloc.c)
  ```c
  void  *ft_calloc(size_t nmemb, size_t size);
  ```
- [🔗](/ft_strdup.c)
  ```c
  char  *ft_strdup(const char *s1);
  ```

### Part 2

- [🔗](/ft_substr.c)
  ```c
  char  *ft_substr(char const *s, unsigned int start, size_t len);
  ```
- [🔗](/ft_strjoin.c)
  ```c
  char	*ft_strjoin(char const *s1, char const *s2);
  ```
- [🔗](/ft_strtrim.c)
  ```c
  char	*ft_strtrim(char const *s1, char const *set);
  ```
- [🔗](/ft_split.c)
  ```c
  char	**ft_split(char const *s, char c);
  ```
- [🔗](/ft_itoa.c)
  ```c
  char	*ft_itoa(int n);
  ```
- [🔗](/ft_strmapi.c)
  ```c
  char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
  ```
- [🔗](/ft_putchar_fd.c)
  ```c
  void  ft_putchar_fd(char c, int fd);
  ```
- [🔗](/ft_putstr_fd.c)
  ```c
  void  ft_putstr_fd(char const *s, int fd);
  ```
- [🔗](/ft_putendl_fd.c)
  ```c
  void	ft_putendl_fd(char const *s, int fd);
  ```
- [🔗](/ft_putnbr_fd.c)
  ```c
  void	ft_putnbr_fd(int nb, int fd);
  ```

### Bonus

- [🔗](/ft_lstnew.c)
  ```c
  t_list  *ft_lstnew(void *content);
  ```
- [🔗](/ft_lstadd_front.c)
  ```c
  void  ft_lstadd_front(t_list **lst, t_list *new);
  ```
- [🔗](/ft_lstsize.c)
  ```c
  int ft_lstsize(t_list *lst);
  ```
- [🔗](/ft_lstlast.c)
  ```c
  t_list  *ft_lstlast(t_list *lst);
  ```
- [🔗](/ft_lstadd_back.c)
  ```c
  void  ft_lstadd_back(t_list **lst, t_list *new);
  ```
- [🔗](/ft_lstdelone.c)
  ```c
  void  ft_lstdelone(t_list *lst, void (*del)(void *));
  ```
- [🔗](/ft_lstclear.c)
  ```c
  void  ft_lstclear(t_list **lst, void (*del)(void	*));
  ```
- [🔗](/ft_lstiter.c)
  ```c
  void  ft_lstiter(t_list *lst, void (*f)(void *));
  ```
- [🔗](/ft_lstmap.c)
  ```c
  t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
  ```

### Added

- [🔗](/ft_strcpy.c)
  ```c
  char  *ft_strcpy(char *dst, const char *src);
  ```
- [🔗](/ft_strnchr.c)
  ```c
  int ft_strnchr(const char *str, int c);
  ```
- [🔗](/ft_isspace.c)
  ```c
  int ft_isspace(char c);
  ```
- [🔗](/ft_uitoa.c)
  ```c
  char  *ft_uitoa(unsigned int n);
  ```
- [🔗](/get_next_line.c)
  ```c
  int get_next_line(int fd, char **line);
  ```
- [🔗](/ft_ternary.c)
  ```c
  int ft_ternary(int condition, int a, int b);
  ```
- [🔗](/ft_abs.c)
  ```c
  int ft_abs(int n);
  ```
- [🔗](/ft_ullen.c)
  ```c
  size_t  ft_ullen(unsigned long nbr);
  ```
- [🔗](/ft_ullen_base.c)
  ```c
  size_t  ft_ullen_base(unsigned long nbr, int base);
  ```
- [🔗](/ft_putnbr_base.c)
  ```c
  void  ft_putnbr_base(long long nb, char *radix);
  ```
- [🔗](/ft_putchar.c)
  ```c
  void  ft_putchar(char c);
  ```
- [🔗](/ft_putstr.c)
  ```c
  void  ft_putstr(char *str);
  ```
- [🔗](/ft_ultoa_base.c)
  ```c
  char  *ft_ultoa_base(unsigned long n, char *radix);
  ```

