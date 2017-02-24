/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omotyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 18:07:06 by omotyliu          #+#    #+#             */
/*   Updated: 2017/01/20 18:07:07 by omotyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_append(char *s1, char const *s2, size_t len, size_t len2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)malloc(len + len2 + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

t_file	*read_buff(t_file *file)
{
	char	*temp;

	temp = ft_strnew(BUFF_SIZE + 1);
	while (1)
	{
		if ((file->byte = read(file->fd, temp, BUFF_SIZE)) == -1)
			file->error = 1;
		temp[file->byte] = (file->eof) ? '\0' : temp[file->byte];
		file->buff = ft_append(file->buff, temp,
			ft_strlen(file->buff), BUFF_SIZE);
		if (ft_strchr(temp, '\n') || file->byte != BUFF_SIZE)
			break ;
		ft_strclr(temp);
	}
	free(temp);
	return (file);
}

char	*get_current(t_file *file)
{
	char	*temp;
	int		temp_pos;
	int		i;

	temp_pos = file->current;
	i = 0;
	while (file->buff[file->current] != '\n' &&
			file->buff[file->current] != '\0')
	{
		i++;
		file->current++;
	}
	if (file->buff[file->current] == '\n')
		file->current++;
	temp = ft_strsub(file->buff, temp_pos, i + 1);
	if (temp[0] == '\0')
		file->eof = 1;
	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == '\n')
			temp[i] = '\0';
		i++;
	}
	return (temp);
}

t_file	*reg_file(int fd)
{
	t_file				*file;
	static	t_storage	*storage;

	if (storage == 0)
	{
		storage = (t_storage *)malloc(sizeof(t_storage));
		storage->mass = (t_file**)malloc(sizeof(t_file) * 4500);
	}
	if (storage->mass[fd] == 0)
	{
		file = (t_file *)malloc(sizeof(t_file));
		file->fd = fd;
		file->str = NULL;
		file->buff = ft_strnew(1);
		file->current = 0;
		file->eof = 0;
		file->byte = 0;
		file->error = 0;
		storage->mass[fd] = file;
	}
	file = storage->mass[fd];
	return (file);
}

int		get_next_line(int fd, char **temp)
{
	t_file	*file;
	char	*result;

	if (fd < 0 || temp == NULL || fd > 4499 || BUFF_SIZE < 1)
		return (-1);
	file = reg_file(fd);
	file = read_buff(file);
	result = get_current(file);
	if (file->error)
		return (-1);
	if (file->eof == 1)
		return (0);
	*temp = ft_strdup(result);
	free(result);
	return (1);
}
