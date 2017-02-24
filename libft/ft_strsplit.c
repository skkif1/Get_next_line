/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:57:15 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/30 17:57:16 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_len(char const *str, char c)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (*(str + i) == c)
		i++;
	while (*(str + i) != c && *(str + i))
	{
		i++;
		len++;
	}
	return (len);
}

static int	ft_words_num(char const *s, char c)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			len++;
		while (s[i] != c && s[i])
			i++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;
	int		k;

	if (!s || !(str = (char **)malloc(sizeof(*str) * (ft_words_num(s, c) + 1))))
		return (NULL);
	j = -1;
	i = 0;
	while (++j < ft_words_num(s, c))
	{
		k = 0;
		if (!(str[j] = ft_strnew(ft_word_len(&s[i], c) + 1)))
			return (NULL);
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			str[j][k++] = s[i++];
		str[j][k] = '\0';
	}
	str[j] = 0;
	return (str);
}