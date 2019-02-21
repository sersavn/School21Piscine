/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 10:35:55 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/08 15:32:47 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		memory_allocation(char	*str)
{
	int mem_cnt;


	mem_cnt = 0;

	while (mem_cnt != '\0')
	{
		mem_cnt++;
	}
	return (0);
}



char	**ft_split_whitespaces(char *str)
{
	char	**string_ptr;
	char	*word_ptr;
	int		word_cnt;
	int		abs_let_cnt;
	int		rel_let_cnt;

	rel_let_cnt = 0;
	abs_let_cnt = 0;
	word_cnt = 0;
	while (str[abs_let_cnt] != '\0')
	{
		//Gimme memory for word
		while (str[abs_let_cnt] != ('\t' | '\n' | ' '))
		{
			rel_let_cnt++;
		}
		word_ptr = (char*)malloc(sizeof(char) * rel_let_cnt);
		//Reserve memory in string
		{
			

		}
		



			string_ptr[word_cnt][rel_let_cnt] = str[abs_let_cnt];
			abs_let_cnt++;
			rel_let_cnt++;
			word_ptr = (char*)malloc(sizeof(char) *
		}
		word_cnt++;
		rel_let_cnt = 0;
	}
	return (string_ptr);
}

int		main(void)
{
	char *word;

	word = "Gref looks like Grif";
	ft_split_whitespaces(word);
	return (0);
}
