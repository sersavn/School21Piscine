/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_recursion_increment.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 14:15:35 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/10 15:02:24 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		recursion_example(increment)
{
	if (increment != 0)
	{
		return recursion_example(increment - 1);
	}
	else
	{
		return (0);
	}
}

int		main(increment)
{
	int increment;

	increment = 5;
	recursion_example(increment)
}
