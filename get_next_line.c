/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbutterm <bbutterm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:54:56 by bbutterm          #+#    #+#             */
/*   Updated: 2019/05/02 18:13:22 by bbutterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	endline(char *buff)
{
	int		count;

	count = 0;
	while (buff[count] != ENDL && buff[count])
		count++;
	if (buff[count] == ENDL)
	{
		buff[count] = END;
		return (count);
	}
	else
		return (-1);
}

static char	*join(char *buff, char *tab)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (buff)
		i = ft_strlen(buff);
	if (tab)
		j = ft_strlen(tab);
	ptr = (char *)malloc(sizeof(*ptr) * (i + j + 1));
	ft_memcpy(ptr, buff, i);
	ft_memcpy(ptr + i, tab, j);
	ptr[i + j] = '\0';
	free(buff);
	ft_bzero(tab, BUFF_SIZE + 1);
	return (ptr);
}

static int	verif(char **buff, char **tmp, char **line)
{
	char	*ptr;
	int		final;

	*buff = join(*buff, *tmp);
	final = endline(*buff);
	if (final > -1)
	{
		*line = ft_strdup(*buff);
		ptr = *buff;
		*buff = ft_strdup(*buff + final + 1);
		free(ptr);
		return (1);
	}
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	static char *buff[12000];
	char		*tmp;
	int			result;

	tmp = ft_strnew(BUFF_SIZE);
	if (!line || BUFF_SIZE <= 0 || fd < 0 || (read(fd, tmp, 0)) < 0)
		return (-1);
	while ((read(fd, tmp, BUFF_SIZE)) > 0)
	{
		result = verif(&buff[fd], &tmp, line);
		free(tmp);
		if (result == 1)
			return (1);
		tmp = ft_strnew(BUFF_SIZE);
	}
	if ((result = verif(&buff[fd], &tmp, line)))
		return (1);
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_strdel(&buff[fd]);
		return (1);
	}
	return (result);
}
