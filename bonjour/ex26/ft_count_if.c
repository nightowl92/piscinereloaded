/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:28:42 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/08 11:19:06 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int ctr;

	i = 0;
	ctr = 0;
	while (*(tab + i))
	{
		if (f(*(tab + i)) == 1)
			ctr++;
		i++;
	}
	return (ctr);
}
