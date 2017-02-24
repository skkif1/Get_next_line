/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:49:46 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/21 17:49:50 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)src;
	while (len--)
	{
		if (*ptr != (unsigned char)c)
		{
			ptr++;
		}
		else
		{
			return (ptr);
		}
	}
	return (NULL);
}
