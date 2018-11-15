/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:49:10 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/08 14:34:54 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int n;

	n = 0;
	while (*(s + n))
	{
		ft_putchar(*(s + n));
		n++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int	n;

	n = 1;
	if (argc < 2)
		return (0);
	while (n < argc)
	{
		ft_putstr(argv[n]);
		n++;
	}
	return (0);
}
