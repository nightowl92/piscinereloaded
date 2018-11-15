/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stherkil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:55:34 by stherkil          #+#    #+#             */
/*   Updated: 2018/11/08 17:13:37 by stherkil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*out;
	int		n;
	int		len;

	n = 0;
	len = 0;
	while (src[len])
		len++;
	if (!(out = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (n < len)
	{
		out[n] = src[n];
		n++;
	}
	out[n] = '\0';
	return (out);
}
