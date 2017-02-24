/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:19:12 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/25 17:19:13 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int ch, size_t len)
{
	size_t			i;
	unsigned char	*s1;

	s1 = src;
	i = 0;
	while (i < len)
	{
		s1[i] = (unsigned char)ch;
		i++;
	}
	return (src);
}
