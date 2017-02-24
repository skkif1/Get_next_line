/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 20:11:58 by omotyliu          #+#    #+#             */
/*   Updated: 2016/12/01 20:11:59 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long temp;

	temp = n;
	if (temp < 0)
	{
		ft_putchar_fd('-', fd);
		temp = -temp;
	}
	if (temp >= 10)
	{
		ft_putnbr_fd(temp / 10, fd);
		ft_putnbr_fd(temp % 10, fd);
	}
	else
		ft_putchar_fd(temp + '0', fd);
}
