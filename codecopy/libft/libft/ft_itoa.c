/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <nneveu@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/12 17:15:58 by nneveu         #+#    #+#                */
/*   Updated: 2020/01/06 19:47:07 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len_nbr(int n)
{
	int len;

	len = 0;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

static char		*ft_big_negative(int n)
{
	char	*str;
	int		nbr_len;

	n *= -1;
	nbr_len = ft_len_nbr(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (nbr_len + 2));
	if (str == NULL)
		return (NULL);
	str[nbr_len + 1] = '\0';
	while (n >= 10)
	{
		str[nbr_len] = (n % 10) + 48;
		nbr_len--;
		n /= 10;
	}
	str[1] = (n % 10) + 48;
	str[0] = '-';
	return (str);
}

static char		*ft_big_positive(int n)
{
	char	*str;
	int		nbr_len;

	nbr_len = ft_len_nbr(n);
	str = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (str == NULL)
		return (NULL);
	str[nbr_len] = '\0';
	while (n >= 10)
	{
		nbr_len--;
		str[nbr_len] = (n % 10) + 48;
		n /= 10;
	}
	str[0] = (n % 10) + 48;
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;

	if (n < 0)
		str = ft_big_negative(n);
	else if (n >= 0)
		str = ft_big_positive(n);
	else
		str = NULL;
	return (str);
}
