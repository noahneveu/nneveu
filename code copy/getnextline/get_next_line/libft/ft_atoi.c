/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nneveu <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:16:40 by nneveu         #+#    #+#                */
/*   Updated: 2020/01/06 19:44:30 by nneveu        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_resatoi(const char *str, int i, int pon)
{
	int long	res;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res <= 922337203685477580)
		{
			res = res * 10 + (str[i] - 48);
			i++;
		}
		else
		{
			if (pon == 1)
				return (-1);
			return (0);
		}
	}
	return (res * pon);
}

int			ft_atoi(const char *str)
{
	int	i;
	int	pon;

	i = 0;
	pon = 1;
	if (!str)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		pon *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	return (ft_resatoi(str, i, pon));
}
