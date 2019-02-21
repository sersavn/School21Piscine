/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dXX_decimal_to_binary.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 15:29:12 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/20 17:58:03 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main()
{
	int n;
	int c;
	int k;

	c = 31;
	while (c >= 0)
	{
		k = n >> c;
		if (k & 1)
			ft_putchar("1");
		else
			ft_putchar("0");
		c--;
	}
	return (0);
}
