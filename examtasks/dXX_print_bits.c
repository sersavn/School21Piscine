/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dXX_print_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 17:08:40 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/21 18:52:35 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursion_roll180(int octet)
{
	if (octet >= 1)
	{
		recursion_roll180(octet/2);
		ft_putchar(octet%2 + '0');
	}
}

void	print_bits(unsigned char octet)
{
	int size;

	size = 128;
	while (size > octet)
	{
		ft_putchar('0');
		size = size/2;
	}
	recursion_roll180(octet);
}
int		main(void)
{
	int n;

	n = 64;
	print_bits(n);
}
