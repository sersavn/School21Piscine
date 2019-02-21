/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:30:32 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/18 13:02:43 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int cnt;
	int result;

	result = 0;
	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (('0' <= str[cnt]) && ('9' >= str[cnt]))
		{
			printf("%c\n", str[cnt]);
			result = result * 10 + (str[cnt] - '0');
		}
		cnt++;
	}
	return (result);
}

int		main(void)
{
	char *ptr;

	ptr = "4365asf";
	printf("%d\n", ft_atoi(ptr));
	printf("%d", atoi(ptr));
	return (0);
}
