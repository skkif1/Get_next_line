/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:01:28 by omotyliu          #+#    #+#             */
/*   Updated: 2016/12/01 17:01:29 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countnum(int n)
{
	size_t count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char		*is_zero(long temp)
{
	char *result;

	if (temp == 0)
	{
		result = (char *)malloc(sizeof(char) * 2);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	return (NULL);
}

static char		*fill(char *res, long temp, int count)
{
	while (temp)
	{
		res[count--] = temp % 10 + '0';
		temp = temp / 10;
	}
	return (res);
}

char			*ft_itoa(int n)
{
	long	temp;
	int		flag;
	size_t	count;
	char	*result;

	temp = n;
	count = countnum(n);
	flag = 0;
	if (temp < 0)
	{
		count++;
		temp = -temp;
		flag = 1;
	}
	if ((result = is_zero(temp)) != NULL)
		return (result);
	result = (char *)malloc(sizeof(char) * count + 1);
	if (result == NULL)
		return (NULL);
	result[count--] = '\0';
	result = fill(result, temp, count);
	if (flag)
		result[0] = '-';
	return (result);
}
