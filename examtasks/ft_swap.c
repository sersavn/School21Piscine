/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:18:51 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/20 19:34:21 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int placeholder;

	placeholder = *a;
	*a = *b;
	*b = placeholder;
	printf("a = %d\n", *a);
	printf("b = %d\n", *b);	
}

int		main(void)
{
	int c;
	int d;

	c = 10;
	d = 5;

	ft_swap(&c, &d);
	return (0); 
}
