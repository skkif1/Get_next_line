/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 15:26:36 by omotyliu          #+#    #+#             */
/*   Updated: 2016/12/05 15:26:37 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *begin;

	if ((begin = (void *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		begin->content = NULL;
		begin->content_size = 0;
		begin->next = NULL;
		return (begin);
	}
	if ((begin->content = (void *)malloc(content_size)) == NULL)
		return (NULL);
	ft_memcpy(begin->content, (void *)content, content_size);
	begin->content_size = content_size;
	begin->next = NULL;
	return (begin);
}
