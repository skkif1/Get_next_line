/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:36:43 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/29 15:36:59 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*buff;

	i = 0;
	buff = (void *)malloc(size);
	if (buff == NULL)
		return (NULL);
	while (i < size)
	{
		buff[i] = 0;
		i++;
	}
	return (buff);
}
