/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:17:59 by nneveu         #+#    #+#                */
/*   Updated: 2019/12/17 18:59:19 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;
	unsigned int		i;

	if (!dst && !src)
		return (dst);
	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr > ptr2)
	{
		while (len > 0)
		{
			ptr[len - 1] = ptr2[len - 1];
			len--;
		}
	}
	while (len > i)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}
