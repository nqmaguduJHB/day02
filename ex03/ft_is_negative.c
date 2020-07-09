/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:30:21 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/09 09:50:46 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	char negative = 'N';
	char positive = 'P';
	if (n >= 0)
	{
		ft_putchar(positive);
	}
	else
	{
		ft_putchar(negative);
	}
	return;
}
