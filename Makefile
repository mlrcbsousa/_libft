# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msousa <msousa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 22:41:56 by msousa            #+#    #+#              #
#    Updated: 2022/01/07 14:34:27 by msousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
CC			= gcc
RM			= rm -f
AR			= ar rc

NAME		= libft.a

SRCS		= ft_atoi.c ft_isalpha.c ft_isprint.c ft_memchr.c ft_memmove.c \
					ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strtrim.c \
					ft_bzero.c ft_isascii.c ft_itoa.c ft_memcmp.c ft_memset.c \
					ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strnstr.c ft_tolower.c \
					ft_isalnum.c ft_isdigit.c ft_memccpy.c ft_memcpy.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strrchr.c ft_toupper.c \
					ft_substr.c ft_calloc.c ft_strlcpy.c ft_split.c ft_strcpy.c \
					ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
					ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
					ft_isspace.c get_next_line.c ft_uitoa.c ft_abs.c ft_ternary.c \
					ft_ullen.c ft_putnbr_base.c ft_putchar.c ft_putstr.c \
					ft_ullen_base.c ft_ultoa_base.c ft_strnchr.c ft_printf_formatters.c \
					ft_printf.c ft_strcmp.c ft_streq.c ft_pow.c ft_fabs.c ft_atof.c \
					ft_isfloat.c ft_isnumber.c ft_putendl.c ft_atol.c ft_lstfind.c \
					ft_lstat.c ft_lstmin_int.c

OBJS		= ${SRCS:.c=.o}

${NAME}:	${OBJS}
					${AR} $@ $^
					ranlib $@

%.o:%.c		libft.h ft_printf.h ft_boolean.h
					${CC} ${CFLAGS} -c $< -o $@

all:			${NAME}

style:
					-norminette $$( find . -type f \( -name "*.c" -or -name "*.h" \) )

clean:
					${RM} ${OBJS}

fclean: 	clean
					${RM} ${NAME}

re: 			fclean all

.PHONY: re clean fclean all
