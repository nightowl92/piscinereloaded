/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:50:16 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/08 16:54:59 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	excpt(int argc)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		suc;
	char	buf[2];

	if (excpt(argc))
		return (0);
	if ((fd = open(argv[1], O_RDWR)) < 0)
		return (0);
	while ((suc = read(fd, buf, 1)))
		write(1, &buf, 1);
	close(fd);
	return (0);
}
