/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 11:30:02 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/06 22:51:28 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude<unistd.h>

void	ft_putstr(char	*str);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	int n1;
	int n2;
	
	n1 = 30;
	n2 = 60;

	char abc[] = "ABCDE";

	ft_putstr("bonjour les gens\n");
	ft_swap(50, 70);
	return (0);
}
