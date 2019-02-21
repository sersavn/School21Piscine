/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_last_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 12:42:08 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/21 13:12:11 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int 	i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			j++;
		}
		i++;
	}
	i = 0;	
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			k++;
		}
		if (k == j)
		{
			ft_putchar(str[i+1]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
