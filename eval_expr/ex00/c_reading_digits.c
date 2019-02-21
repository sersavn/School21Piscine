/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_reading_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:46:39 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/16 21:50:41 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		c_reading_digits(char *str)
{
	int cnt;
	int digits_cnt;

	cnt = 0;
	digits_cnt = 0;
	while (str[cnt] != '\0')
	{
		if (('0' <= str[cnt]) && (str[cnt] <= '9'))
		{
			digits_cnt++;
		}
		cnt++;
	}
	return (digits_cnt);
}
