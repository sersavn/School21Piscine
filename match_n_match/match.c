/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:08:46 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/10 20:36:29 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//match function
int		match(char *s1, char *s2)
{
	int 	cnt;
	char	star;

	cnt = 0;
	while ((s1[cnt] != '\0') && (s2[cnt] != '\0'))
	{
		if (s1[cnt] == s2[cnt])
		{
			cnt++;
			match(s1 + 1, s2 + 1);
			return (0);
		}
		else 
		{
			return (0);
		}
	}
	return (0);
}

int		main(void)
{
	char *w1;
	char *w2;

	w1 = "ABcD";
	w2 = "ABcDeF";

	match (w1, w2);
	return (0);
}
