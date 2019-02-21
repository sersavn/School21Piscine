/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dXX_bits_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 17:52:14 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/20 18:18:40 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		swap_bits(unsigned char c)
{
	c = ((c >> 4) | (c << 4));
	return (c);
}

int		main(void)
{
	unsigned char let;

	let = 'a';
	printf("%d\n", let);
	printf("%d\n", swap_bits(let));
	return (0);
}
