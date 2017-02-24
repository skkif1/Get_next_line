/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 18:17:27 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/22 18:17:28 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *first, const char *secod)
{
	unsigned char a;
	unsigned char b;

	a = *first;
	b = *secod;
	while (a == b)
	{
		a = *first++;
		b = *secod++;
		if (a == '\0')
		{
			return ((int)a - b);
		}
	}
	return ((int)a - b);
}
