/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:58:00 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/09 09:06:07 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char number = '0';
	while(number <= '9')
	{
		ft_putchar(number);
		number++;
	}
	return;
}


int main(void)
{
	ft_print_numbers();
}
