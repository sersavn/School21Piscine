/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:33:37 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/20 13:24:26 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		pow_result(char *digit, int pow)
{	
	int result;
	int base_i;
	int digit_i;

	result = atoi(digit);
	digit_i = atoi(digit);
	if (pow >= 1)
	{
		while (pow != 1)
		{
			result = result * digit_i;
			pow--;
		}
		return (result);
	}	
	else
		return (1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		str_len;
	int		result;
	int		int_str;
	int		int_base;

	str_len = 0;
	result = 0;
	int_base = atoi(base);
	while (str[str_len] != '\0')
		str_len++;

	while (str_len != 0)
	{
		int_str = atoi(&str[str_len]);
		result = result + int_str * pow_result(base, (str_len-1)); 
		printf("int_str = %d\n", int_str);
		printf("base = %d\n", int_base);
		printf("str_len = %d\n", str_len-1);
		str_len--;
	}
	printf("result = %d\n", result);
	//printf("base = %d\n", i_base);
	return (0);
}

int		main(void)
{
	char	*num;
	char	*base;

	num = "235";
	base = "8";
	printf("%d\n", pow_result("2", 3));
	ft_atoi_base(num, base);	
	return (0);
}
