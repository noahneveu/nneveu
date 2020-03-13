/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <nneveu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/05 15:23:20 by nneveu         #+#    #+#                */
/*   Updated: 2019/12/06 14:53:06 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		len;
	int		i;

	len = ft_strlen((char *)s1);
	res = (char *)malloc((sizeof(char) * (len + 1)));
	i = 0;
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = s1[i];
		i++;
	}
	res[len] = '\0';
	if (res)
		return (res);
	return (NULL);
}
