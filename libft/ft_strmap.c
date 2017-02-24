/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:27:29 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/29 19:27:30 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (s != NULL && f != NULL)
	{
		str = (char *)malloc(ft_strlen(s) + 1);
		if (str == NULL)
			return (NULL);
	}
	if (s != NULL && f != NULL)
	{
		while (i < ft_strlen(s))
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
