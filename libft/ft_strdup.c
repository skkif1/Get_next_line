/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 19:11:59 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/24 19:12:00 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *str_copy;

	str_copy = (char *)malloc(sizeof(*str_copy) * (ft_strlen(str) + 1));
	if (str_copy == NULL)
		return (NULL);
	return (ft_strcpy(str_copy, str));
}
