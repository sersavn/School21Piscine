/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:23:42 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/15 12:04:27 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int arr_len;
	int *array;
	int cnt;

	cnt = 0;
	arr_len = max - min;
	array = (int*)malloc(sizeof(int) * arr_len);
	while (cnt != arr_len)
	{
		array[cnt] = min + cnt;
		cnt++;
	}
	return (array);
}

int	main(void)
{
	int a;
	int b;

	a = 50;
	b = 60;
	printf("%d", ft_range(a, b));
	return (0);
}
