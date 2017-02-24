/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 18:31:39 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/27 18:31:41 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*st_strstr(const char *st_pos,
								const char *st_src, const char *st_tofind)
{
	size_t		i;
	size_t		j;
	size_t		temp;

	i = 0;
	j = 0;
	while (st_src[i] != '\0')
	{
		if (st_src[i] == st_tofind[0])
		{
			temp = i;
			st_pos = st_src + i;
			while (st_src[i] == st_tofind[j] && st_src[i] != '\0')
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

char			*ft_strstr(const char *src, const char *tofind)
{
	const char	*pos;

	if (ft_strlen(tofind) == 0)
		return (char *)src;
	return (st_strstr(pos, src, tofind));
}
