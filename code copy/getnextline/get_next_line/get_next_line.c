/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/27 14:49:31 by nneveu         #+#    #+#                */
/*   Updated: 2020/03/03 13:54:22 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	nfound(char **line, char buff, char *s, int fd)
{
	*line == *line + ft_strchr(buff, 'n');
	
}

int	get_next_line(int fd, char **line)
{
	static char	*r;
	char		buff[BUFFER_SIZE];
	int			read_return;

	while ((read_return = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		if (*r == NULL)
			s = ft_strdup("");
		else
		{
			if (ft_strchr(buff, '\n') == 0)
			{
				s = ft_strjoin(s, buff);
			}
			else
			{
				nfound(buff);
			}
			
		}
		
		
}

