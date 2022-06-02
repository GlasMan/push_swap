/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:08:06 by scoskun           #+#    #+#             */
/*   Updated: 2022/06/02 16:01:11 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *data)
{
	int	i;

	i = 0;
	while (i < data->alen)
	{
		if (data->stacka[i] > data->stacka[i + 1] && i + 1 < data->alen)
			return (0);
		i++;
	}
	ft_exit(data, data->flag = 0);
	return (1);
}

void	is_double(t_list *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->alen)
	{
		j = 0;
		while (j < data->alen)
		{
			if (data->stacka[i] == data->stacka[j] && i != j)
				ft_exit(data, data->flag = 1);
			j++;
		}
		i++;
	}
}

int	is_ascending(int *arr, int l)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < l)
	{
		if (arr[i] < arr[i + 1] && i + 1 < l)
			return (0);
		i++;
	}
	return (1);
}
