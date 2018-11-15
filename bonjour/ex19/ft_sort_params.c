/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:41:12 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/08 15:14:53 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (*(s1 + n) || *(s2 + n))
	{
		if (*(s1 + n) != *(s2 + n))
			return (s1[n] - s2[n]);
		n++;
	}
	return (0);
}

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

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argc, char **argv)
{
	int n;

	n = 1;
	if (argc < 2)
		return (0);
	while (n < argc - 1)
	{
		if (ft_strcmp(argv[n], argv[n + 1]) > 0)
		{
			ft_swap(&argv[n], &argv[n + 1]);
			n = 1;
		}
		else
			n++;
	}
	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		n++;
	}
	return (0);
}
