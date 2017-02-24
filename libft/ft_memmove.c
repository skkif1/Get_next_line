/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:15:03 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/21 17:15:34 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int				i;
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	i = 0;
	if (ptrdest < ptrsrc)
	{
		while ((size_t)i < len)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			ptrdest[i] = ptrsrc[i];
			i--;
		}
	}
	return (dest);
}
