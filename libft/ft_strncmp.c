/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strn_cmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 18:53:51 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/22 18:53:52 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t num)
{
	unsigned char a;
	unsigned char b;

	a = *first;
	b = *second;
	if (num == 0)
		return (0);
	while (a == b && num > 0)
	{
		a = *first++;
		b = *second++;
		if (a == '\0')
		{
			return ((int)a - b);
		}
		num--;
	}
	return ((int)a - b);
}
