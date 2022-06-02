/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:27:15 by scoskun           #+#    #+#             */
/*   Updated: 2022/06/02 13:54:07 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str, t_list *data)
{
	int		i;
	int		neg;
	long	res;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg *= -1;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1] != '\0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
		if (res * neg > 2147483647)
			ft_exit(data, data->flag = 2);
		if (res * neg < -2147483648)
			ft_exit(data, data->flag = 2);
	}
	if (str[i] != '\0')
		ft_exit(data, data->flag = 2);
	return ((int)res * neg);
}
