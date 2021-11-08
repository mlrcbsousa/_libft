/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfloat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:36:36 by msousa            #+#    #+#             */
/*   Updated: 2021/11/08 16:37:39 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isfloat(char *str)
{
	if (!str || (*str != '-' && !ft_isdigit(*str))
		|| (*str == '-' && *(str + 1) == '.'))
		return (FALSE);
	str++;
	while (*str && *str != '.')
	{
		if (!ft_isdigit(*str))
			return (FALSE);
		str++;
	}
	if (!*str)
		return (TRUE);
	if (*str == '.')
	{
		str++;
		while (*str)
		{
			if (!ft_isdigit(*str))
				return (FALSE);
			str++;
		}
	}
	return (TRUE);
}
