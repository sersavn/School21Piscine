/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:23:40 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/13 14:28:18 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/start.h>

int main()
{
	int fd;

	fd = open("42", O_RDONLY);
	ft_putnbr(fd);
	return (0);
}
