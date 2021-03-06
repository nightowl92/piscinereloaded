/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:16:01 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/07 17:43:28 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		i *= nb - 1;
		nb--;
	}
	return (i);
}
