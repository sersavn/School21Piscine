/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_capitals.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 12:15:33 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/14 18:45:32 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	reverse_letters(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] >= 'a') && (str[cnt] <= 'z'))
		{
			ft_putchar(str[cnt] - 32);
		}
		else if ((str[cnt] >= 'A') && (str[cnt] <= 'Z'))
		{
			ft_putchar(str[cnt] + 32);
		}
		else
		{
			ft_putchar(str[cnt]);
		}
		cnt++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char *the_phrase;

	the_phrase = argv[1];
	reverse_letters(the_phrase);
}
