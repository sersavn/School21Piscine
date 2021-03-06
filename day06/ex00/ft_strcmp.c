/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:41:24 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/06 20:49:30 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int cnt;
	int res;

	res = 0;
	cnt = 0;
	while ((s1[cnt] != '\0') || (s2[cnt] != '\0'))
	{
		if (s1[cnt] != s2[cnt])
		{
			res = (s1[cnt] - s2[cnt]);
			return (res);
		}
	}
	if ((s1[cnt] == '\0') && (s2[cnt] == '\0'))
	{
		return (0);
	}
	return (0);
}
