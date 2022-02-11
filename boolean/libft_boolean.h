/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_boolean.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <msousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:54:26 by msousa            #+#    #+#             */
/*   Updated: 2022/02/11 15:29:20 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BOOLEAN_H
# define LIBFT_BOOLEAN_H

# include "libft.h"

t_bool	ft_isalpha(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isalnum(int c);
t_bool	ft_isascii(int c);
t_bool	ft_isprint(int c);
t_bool	ft_isspace(char c);
t_bool	ft_isfloat(char *str);
t_bool	ft_isnumber(char *str);
t_bool	ft_isnumber_u(char *str);
t_bool	ft_ternary(int condition, int a, int b);

#endif
