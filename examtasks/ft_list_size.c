/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:47:49 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/20 19:48:41 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_list_size(t_list *begin_list);
{
	int i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list -> next;
		i++;
	}
