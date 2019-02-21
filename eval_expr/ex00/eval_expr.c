/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 12:05:06 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/16 22:39:09 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include <stdio.h>
#include <stdlib.h>

int		eval_expr(char *str)
{
	int		len_a;
	int		len_b;
	int		c;
	char	*e;
	char 	*f;

	len_a = a_operations_stack_len(str);
	printf("operations_stack len = %d\n", len_a);
	len_b = b_output_stack_len(str);
	printf("output stack len = %d\n", len_b);
	c = c_reading_digits(str);
	printf("reading_digits (total len) = %d\n", c);
	e = output_stack_filling(str);
	printf("output_stack = %s", e);
	return (66);
}
