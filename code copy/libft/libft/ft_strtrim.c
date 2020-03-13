/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <nneveu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/09 16:49:30 by nneveu         #+#    #+#                */
/*   Updated: 2020/01/06 20:24:36 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_beg(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
			continue;
		}
		if (set[j] == '\0')
			break ;
		j++;
	}
	return (i);
}

static int	ft_strlen_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (j > 0)
	{
		if (s1[j] == set[i])
		{
			j--;
			i = 0;
			continue;
		}
		if (set[i] == '\0')
			break ;
		i++;
	}
	return (j);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*res;
	int		end;
	int		beg;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	end = ft_strlen_end(s1, set);
	beg = ft_strlen_beg(s1, set);
	len = (end - beg + 1);
	if (beg > end)
		return (ft_strdup(""));
	res = ft_substr(s1, beg, len);
	return (res);
}
