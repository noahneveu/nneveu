/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/12 15:20:51 by nneveu         #+#    #+#                */
/*   Updated: 2019/12/19 16:43:08 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	**ft_free(char **res, int i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res[i]);
	free(res);
	return (res);
}

char	**ft_fillres(char *s, char c, char **res)
{
	int i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			res[j][k] = s[i];
			i++;
			k++;
			if (s[i] == c || s[i] == '\0')
			{
				res[j][k] = '\0';
				//printf("|%s| = string in array[%i]\n", res[j],  j);
				j++;
				k = 0;
			}
		}
		i++;
	}
	return (res);
}

int		ft_stringlen(char *s, char c, int n)
{
	int	i;
	int w_i;
	int count;

	i = 0;
	w_i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			w_i++;
			i++;
		}
		if (w_i == n)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count + 1);
}

int		ft_separations(char const *s, char c)
{
	int i;
	int num_c;

	num_c = 1;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i] == '\0')
			num_c++;
		i++;
	}
	return (num_c);
}

char	*ft_perfect_str(char *s, char c)
{
	int		i;
	char	*pstr;
	int		j;

	pstr = (char *)malloc(sizeof(char *) * ft_strlen(s) + 1);
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] == c)
			i++;
		if (s[i] != c || (s[i] == c && s[i + 1] != c))
		{
			if (s[i] == c && s[i + 1] == '\0')
				i++;
			else
			{
				pstr[j] = s[i];
				i++;
				j++;
			}
		}
	}
	pstr[j] = '\0';
	return (pstr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		sep;
	char	*test;
	char	**res;

	if (!s)
		return (NULL);
	i = 0;
	test = ft_perfect_str((char *)s, c);
	sep = ft_separations(test, c);
	printf("teststring: |%s|\n", test);
	printf("sep = %i\n", sep);
	res = (char **)malloc(sizeof(char *) * (sep + 1));
	if (res == NULL)
		return (NULL);
	while (i < sep)
	{
		//printf("stringlen = %i\n", ft_stringlen(test, c, i));
		res[i] = (char *)malloc(sizeof(char) * ft_stringlen(test, c, i));
		if (!res[i])
			return (ft_free(res, i));
		i++;
	}
	res = ft_fillres(test, c, res);
	res[sep] = NULL;
	return (res);
}
