/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_operations_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:42:17 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/16 23:59:39 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*a_operations_stack(char *str)
{
	int		cnt;
	int		max_stack_size;
	char	*stack;

	cnt = 0;
	max_stack_size = 0;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] == '+') || (str[cnt] == '-') ||
			(str[cnt] == '/') || (str[cnt] == '*') ||
			(str[cnt] == '%') || (str[cnt] == ')') ||
			(str[cnt] == '('))
		{
			max_stack_size++;
		}
		cnt++;
	}
	stack = (char*)malloc(sizeof(char) * max_stack_size);
	return (stack);
}

int		a_operations_stack_len(char *str)
{
	int cnt;
	int operations_cnt;

	operations_cnt = 0;
	cnt = 0;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] == '+') || (str[cnt] == '-') ||
			(str[cnt] == '/') || (str[cnt] == '*') ||
			(str[cnt] == '%') || (str[cnt] == ')') ||
			(str[cnt] == '('))
		{
			operations_cnt++;
		}
		cnt++;
	}
	return (operations_cnt);
}
