/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 11:11:39 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/03 20:12:53 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	rush(int x,int y)
{
	int counter;
	char spaceholder;
	char sym_0;
	char sym_1;
	char sym_2;

	counter = 0;
	spaceholder = '@';
	sym_0 = 'o';
	sym_1 = '|';
	sym_2 = '-';
	
	while (y != -1)
	{
		while (counter != 0)
		{
			ft_putchar(sym_0);
			counter = counter - 1;
		}
		if (y == 0)
		{
			ft_putchar(sym_1);
		}

		counter = x;
		y = y - 1;
		ft_putchar('\n');
	}
	return (0);
}


int		main()
{
	rush(5, 5);
	return (0);
}
