/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <nneveu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/06 15:01:19 by nneveu         #+#    #+#                */
/*   Updated: 2020/01/04 18:06:10 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	res = (char *)malloc((sizeof(char) * (len + 1)));
	if (res == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
