/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_video.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:23:11 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/13 11:31:08 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "j12.h"

int main()
{
	int fd;

	fd = open("alph", O_RDONLY | O_CREAT, S_IRUSR | S_IWUS);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
	}
	ft_putnbr(fd);
	return (0);
}
