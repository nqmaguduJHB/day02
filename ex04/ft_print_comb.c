/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:04:52 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/09 13:37:36 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{

	char a	= '0';
	char b;
	char c;
	
	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
 				ft_putchar(c);
				ft_putchar(',');
				ft_putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
}

