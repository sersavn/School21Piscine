/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 22:02:07 by jberic            #+#    #+#             */
/*   Updated: 2019/02/03 22:34:45 by jberic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char i);

int		rush(int x, int y)
{
	int a;
	int t;

	if (x <= 0 || y <= 0)
		return (0);
	t = 0;
	while (t++ < y)
	{
		a = 0;
		while (a++ < x)
		{
			if ((t == 1 && a == 1) || (t == 1 && a == x))
				ft_putchar('o');
			else if ((a == 1 && t == y) || (a == x && t == y))
				ft_putchar('o');
			else if ((t == 1 && a < x) || (t == y && a < x))
				ft_putchar('-');
			else if ((a == 1 && t < y) || (a == x && t < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	return (0);
}
