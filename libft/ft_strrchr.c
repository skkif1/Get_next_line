/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:41:23 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/24 16:41:24 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (str[i] == ch)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	if (str[i] == ch)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
