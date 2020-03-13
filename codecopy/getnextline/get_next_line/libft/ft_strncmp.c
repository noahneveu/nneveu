/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 00:36:05 by nneveu         #+#    #+#                */
/*   Updated: 2019/12/18 20:47:54 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > i && s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((int)(unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if (n == i && i >= 0)
		return (0);
	return ((int)(unsigned char)s1[i] - (unsigned char)s2[i]);
}
