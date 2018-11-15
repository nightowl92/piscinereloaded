/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:21:28 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/06 16:50:02 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (max <= min)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		*(tab + i) = min + i;
		i++;
	}
	return (tab);
}
