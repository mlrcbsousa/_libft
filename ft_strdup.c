/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:59:12 by manuel            #+#    #+#             */
/*   Updated: 2021/03/18 23:07:58 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!str)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_strcpy(str, src);
	return (str);
}
