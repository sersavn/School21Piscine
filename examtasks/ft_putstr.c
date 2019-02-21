/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:57:26 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/14 12:05:00 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		ft_putchar(str[cnt]);
		cnt++;
	}
}

int		main(void)
{
	char *a;

	a = "ABCDEFG";
	ft_putstr(a);
	return (0);
}
