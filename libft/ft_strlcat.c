/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:22:23 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/28 17:22:44 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t destsize;
	size_t srcsize;
	size_t i;
	size_t j;

	j = ft_strlen(dst);
	i = 0;
	srcsize = ft_strlen(src);
	destsize = j;
	if (destsize >= size)
		return (size + srcsize);
	else
	{
		while (src[i] && j < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	return (destsize + srcsize);
}
