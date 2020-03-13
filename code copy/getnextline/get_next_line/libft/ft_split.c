/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/12 15:20:51 by nneveu         #+#    #+#                */
/*   Updated: 2020/01/06 19:49:02 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_free(char **res, int i)
{
	if (res[i] == 0)
	{
		while (i > 0)
		{
			i--;
			free(res[i]);
		}
		free(res);
		return (1);
	}
	return (0);
}

static int		ft_stringlen(const char *s, char c, int i)
{
	int len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

static char		**ft_fillres(char const *s, char c, char **res, int i)
{
	int		len;
	int		s_i;
	int		j;

	s_i = 0;
	while (s[s_i])
	{
		j = 0;
		while (s[s_i] == c)
			s_i++;
		len = ft_stringlen(s, c, s_i);
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (ft_free(res, i))
			return (0);
		while (j < len)
		{
			res[i][j] = s[s_i];
			s_i++;
			j++;
		}
		res[i][j] = '\0';
		i++;
	}
	return (res);
}

static int		ft_seperations(char const *s, char c)
{
	int i;
	int sep;

	sep = 0;
	i = 0;
	if (s[i] == 0)
		return (0);
	while (s[i])
	{
		while ((s[i] == c) && (s[i + 1] != '\0'))
			i++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			sep++;
		i++;
	}
	return (sep);
}

char			**ft_split(char const *s, char c)
{
	int		xtra_int;
	int		sep;
	char	**res;

	xtra_int = 0;
	if (s == 0)
		return (0);
	sep = ft_seperations(s, c);
	res = (char **)malloc(sizeof(char *) * (sep + 1));
	if (res == 0)
		return (0);
	res = ft_fillres(s, c, res, xtra_int);
	if (res == 0)
		return (0);
	res[sep] = NULL;
	return (res);
}
