/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:27:01 by msousa            #+#    #+#             */
/*   Updated: 2021/04/23 19:02:44 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ullen(unsigned long nbr, int base)
{
	size_t	len;

	len = 1;
	while (nbr / base)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
/*
#include <stdio.h>

int main(void)
{
	// 0
	printf("%d\n", (ft_ullen(0, 10) == 1));
	printf("%d\n", (ft_ullen(0, 2) == 1));
	printf("%d\n", (ft_ullen(0, 8) == 1));
	printf("%d\n", (ft_ullen(0, 16) == 1));
	
	// max
	printf("%d\n", (ft_ullen(9, 10) == 1));
	printf("%d\n", (ft_ullen(1, 2) == 1));
	printf("%d\n", (ft_ullen(7, 8) == 1));
	printf("%d\n", (ft_ullen(15, 16) == 1));
	
	// limit
	printf("%d\n", (ft_ullen(10, 10) == 2));
	printf("%d\n", (ft_ullen(2, 2) == 2));
	printf("%d\n", (ft_ullen(8, 8) == 2));
	printf("%d\n", (ft_ullen(16, 16) == 2));
	
	// high
	printf("%d\n", (ft_ullen(234567, 10) == 6));
	printf("%d\n", (ft_ullen(11, 2) == 4));
	printf("%d\n", (ft_ullen(64, 8) == 3));
	printf("%d\n", (ft_ullen(256, 16) == 3));
	
	return (0);
}
*/
