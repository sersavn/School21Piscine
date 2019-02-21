/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_output_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:43:25 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/16 22:25:44 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*b_output_stack(char *str)
{
	int		cnt;
	char	*stack;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	stack = (char*)malloc(sizeof(char) * cnt);
	return (stack);
}

int		b_output_stack_len(char *arr)
{
	int cnt;

	cnt = 0;
	while (arr[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
