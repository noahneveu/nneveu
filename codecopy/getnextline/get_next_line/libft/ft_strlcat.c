/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 14:43:54 by nneveu         #+#    #+#                */
/*   Updated: 2020/01/03 20:45:02 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	res;
	char	*src_ptr;

	i = 0;
	res = 0;
	while (src[res] != '\0')
		res++;
	dst_len = ft_strlen(dst);
	src_ptr = (char *)src;
	if (dstsize <= dst_len)
		res += dstsize;
	else
		res += dst_len;
	while (src[i] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src_ptr[i];
		dst_len++;
		i++;
	}
	if (i != 0)
		dst[dst_len] = '\0';
	return (res);
}
