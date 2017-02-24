/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:41:40 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/25 15:41:41 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*ch1;
	unsigned char	*ch2;

	ch1 = (unsigned char*)dest;
	ch2 = (unsigned char*)src;
	if (len == 0 || dest == src)
	{
		return (dest);
	}
	while (len--)
	{
		*ch1++ = *ch2++;
	}
	return (dest);
}
