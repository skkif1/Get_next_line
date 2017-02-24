/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 19:47:04 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/27 19:47:05 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*st_strnstr(const char *st_pos, const char *st_src,
	const char *st_tofind, size_t len)
{
	size_t i;
	size_t j;
	size_t temp;

	i = 0;
	j = 0;
	while (st_src[i] != '\0' && i < len)
	{
		if (st_src[i] == st_tofind[0])
		{
			temp = i;
			st_pos = st_src + i;
			while (st_src[i] == st_tofind[j] && st_src[i] != '\0' && i < len)
			{
				j++;
				i++;
			}
			if (j == ft_strlen(st_tofind))
				return ((char*)st_pos);
			i = temp;
			j = 0;
		}
		i++;
	}
	return (NULL);
}

char		*ft_strnstr(const char *src, const char *tofind, size_t len)
{
	const char *pos;

	if (ft_strlen(tofind) == 0)
		return (char *)src;
	return (st_strnstr(pos, src, tofind, len));
}
