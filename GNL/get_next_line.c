/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pniyom <pniyom@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:31:10 by pniyom            #+#    #+#             */
/*   Updated: 2022/12/07 20:01:23 by pniyom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*#include <stdio.h>
# include<fcntl.h>
*/

static char	*remove_read_line(char *backup)
{
	int		i;
	int		j;
	char	*new_backup;

	i = 0;
	while (backup[i] && backup[i] != '\n')
		i++;
	if (!backup[i])
	{
		free(backup);
		return (NULL);
	}
	new_backup = (char *)malloc(sizeof(char) * (find_len(backup) - i + 1));
	if (!new_backup)
		return (NULL);
	i++;
	j = 0;
	while (backup[i])
		new_backup[j++] = backup[i++];
	new_backup[j] = '\0';
	free (backup);
	return (new_backup);
}

static char	*get_line(char *backup)
{
	char	*line;
	size_t	size;

	if (!*backup)
		return (NULL);
	size = 0;
	while (backup[size] && backup[size] != '\n')
		size++;
	line = (char *)malloc(sizeof(char) * (2 + size));
	if (!line)
		return (NULL);
	string_line_copy(line, backup, size + 1);
	if (backup[size] == '\n')
		line[size++] = '\n';
	line[size] = '\0';
	return (line);
}

static char	*read_file(int fd, char *backup)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	read_bytes = 1;
	if (!buffer)
		return (NULL);
	while (read_bytes > 0 && !search_string(backup, '\n'))
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
			break ;
		buffer[read_bytes] = '\0';
		backup = join_string(backup, buffer);
	}
	free (buffer);
	if (read_bytes < 0)
		return (NULL);
	else
		return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	backup = read_file(fd, backup);
	if (!backup)
		return (NULL);
	line = get_line(backup);
	backup = remove_read_line(backup);
	return (line);
}
/*
int	main(void)
{
	char	*temp;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	while (1)
	{
		temp = get_next_line(fd);
		if (!temp)
			break ;
		printf("%s", temp);
		free(temp);
	}
	return (0);
	
}*/
