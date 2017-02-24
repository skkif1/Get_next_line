/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:00:51 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/25 15:00:52 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *src, const void *comp, size_t l)
{
	const unsigned char		*str1;
	const unsigned char		*str2;

	str1 = (const unsigned char *)src;
	str2 = (const unsigned char *)comp;
	if (src == comp || l == 0)
		return (0);
	while (l--)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		if (l != '\0')
		{
			str1++;
			str2++;
		}
	}
	return (0);
}
