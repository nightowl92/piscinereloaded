/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:28:44 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/07 19:18:27 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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
