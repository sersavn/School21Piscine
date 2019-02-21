/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_letter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:05:26 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/20 20:03:20 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	replace_letter(char *phrase, char *let_a, char *let_b)
{
	int cnt;

	cnt = 0;
	while (phrase[cnt] != '\0')
	{
		if (phrase[cnt] == let_a)
		{
			phrase[cnt] = let_b;
			ft_putchar(let_b);
		}
		else
		{
			ft_putchar(phrase[cnt]);
		}
		cnt++;
	}
	return (phrase);
}

int		main(int argc, char **argv)
{
	char *phrase;
	char *let_original;
	char *let_to_be_replaced;

	phrase = argv[1];
	let_original = argv[2][0];
	let_to_be_replaced = argv[3][0];
	replace_letter(phrase, let_original, let_to_be_replaced);
	return (0);
}
