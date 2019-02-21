/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_Polska_Kuwa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 22:33:30 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/16 23:26:51 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

char	*output_stack_filling(char *str)
{
	int		cnt;
	char	*output_stack;
	char	*operations_stack;
	int op_cnt;
	int ou_cnt;

	output_stack = b_output_stack(str);
	operations_stack = a_operations_stack(str);
	cnt = 0;
	op_cnt = 0;
	ou_cnt = 0;

	while (str[cnt] != '\0')
	{
		if (('0' <= str[cnt]) && (str[cnt] <= '9'))
		{
			output_stack[ou_cnt] = str[cnt];
			printf("output = %d\n", cnt);
			ou_cnt++;
		}
		else if ((str[cnt] == '+') || (str[cnt] == '-') ||
				(str[cnt] == '/') || (str[cnt] == '*') ||
				(str[cnt] == '%') || (str[cnt] == '(') ||
				(str[cnt] == ')'))
		{
			operations_stack[op_cnt] = str[cnt];
			printf("operations = %d\n", cnt);
			op_cnt++;
		}
		else
		{
			output_stack[ou_cnt] = str[cnt];
			ou_cnt++;
		}
		cnt++;
	}
	printf("op stack = %s\n", operations_stack);
	printf("ou stack = %s\n", output_stack);
	return (output_stack);
}
