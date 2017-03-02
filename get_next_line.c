/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 18:17:28 by dbud              #+#    #+#             */
/*   Updated: 2017/03/01 14:59:07 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_read_from_file(int fd, char **text)
{
	int			count_char;
	char		*buffer;

	if (!(buffer = (char*)malloc(sizeof(*buffer) * (BUFF_SIZE + 1))))
		return (-1);
	if ((count_char = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[count_char] = '\0';
		*text = ft_strjoin(*text, buffer);
	}
	return (count_char);
}

int				get_next_line(int const fd, char **line)
{
	static char	*text = NULL;
	int			count_char;
	char		*pointer;

	if (fd < 0 || !line ||
			(!text && (text = (char *)malloc(sizeof(*text))) == NULL))
		return (-1);
	pointer = ft_strchr(text, '\n');
	while (pointer == NULL)
	{
		count_char = ft_read_from_file(fd, &text);
		if (count_char == 0)
		{
			if (ft_strlen(text) == 0)
				return (0);
			text = ft_strjoin(text, "\n");
		}
		if (count_char < 0)
			return (-1);
		else
			pointer = ft_strchr(text, '\n');
	}
	*line = ft_strsub(text, 0, ft_strlen(text) - ft_strlen(pointer));
	text = ft_strdup(pointer + 1);
	return (1);
}
