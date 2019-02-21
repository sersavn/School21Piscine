/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d10_01_ft_foreach.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:38:09 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/14 19:51:20 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_foreach(int *tab, int length, void(*f)(int));
{
	int cnt;

	cnt = 0;
	while (cnt < length)
	{
		f(tab[cnt])
		cnt++
	}

