/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 03:49:07 by nneveu         #+#    #+#                */
/*   Updated: 2019/12/03 05:16:28 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	unsigned int	i;

	src = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		src[i] = '\0';
		i++;
	}
}
