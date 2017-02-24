/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:36:16 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/29 18:36:17 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t len;
	size_t i;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			f(&s[i]);
			i++;
		}
	}
}
