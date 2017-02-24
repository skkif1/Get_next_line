/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:28:38 by omotyliu          #+#    #+#             */
/*   Updated: 2016/11/23 13:28:39 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	ch;
	int		temp;
	int		sum;
	int		flag;

	ch = *str++;
	temp = 0;
	sum = 0;
	flag = 0;
	while ((ch == 9 || ch == 32 || ch == 10 || ch == 11 || ch == 12
		|| ch == 13) && ch != '\0')
		ch = *str++;
	if (ch == 45)
		flag = 1;
	if (ch == 43 || ch == 45)
		ch = *str++;
	while (ch >= 48 && ch <= 57)
	{
		temp = ch - 48;
		sum = sum * 10 + temp;
		ch = *str++;
	}
	if (flag)
		return (-sum);
	return (sum);
}
