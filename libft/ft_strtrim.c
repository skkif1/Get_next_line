/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:54:17 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/30 16:54:18 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	temp;
	size_t	i;
	size_t	j;
	char	*str;

	str = NULL;
	i = 0;
	temp = 0;
	if (s != NULL)
	{
		j = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[j] == ' ' || s[j] == ',' || s[j] == '\n' || s[j] == '\t')
			j--;
		if (i == ft_strlen(s))
			return (str = ft_strdup(""));
		str = (char *)malloc(ft_strlen(s) - i - (ft_strlen(s) - ++j) + 1);
		if (str == NULL)
			return (NULL);
		while (i < j)
			str[temp++] = s[i++];
		str[temp] = '\0';
	}
	return (str);
}
