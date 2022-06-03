/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:52:08 by scoskun           #+#    #+#             */
/*   Updated: 2022/06/03 17:20:12 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_sort(t_list *data)
{
	int	mid;

	mid = data->sorted[data->sorted_l / 2];
	while (data->alen > 3)
	{
		while (data->stacka[0] >= mid)
		{
			ra(data);
		}
		pb(data);
	}
	if (data->stackb[0] < data->stackb[1])
		sb(data);
	three_sort(data);
	while (data->blen)
		pa(data);
}

void	three_sort(t_list *data)
{
	if (data->stacka[0] < data->stacka[2] && data->stacka[0] > data->stacka[1])
		sa(data);
	else if (data->stacka[0] > data->stacka[1] && \
		data->stacka[0] > data->stacka[2] && \
		data->stacka[1] < data->stacka[2])
		ra(data);
	else if (is_ascending(data->stacka, data->alen))
	{
		sa(data);
		rra(data);
	}
	else if (data->stacka[1] > data->stacka[0] && \
		data->stacka[1] > data->stacka[2] && \
		data->stacka[0] < data->stacka[2])
	{
		sa(data);
		ra(data);
	}
	else if (data->stacka[1] > data->stacka[0] && \
		data->stacka[1] > data->stacka[2] && \
		data->stacka[0] > data->stacka[2])
		rra(data);
}

void	radix_sort(t_list *data)
{
	int	i;
	int	j;
	int	max;
	int	xn;

	i = 0;
	xn = 0;
	max = find_max_bit(data);
	while (i < max)
	{
		j = 0;
		while (j < data->keep)
		{
			xn = find_index(data, data->stacka[0]);
			if (xn >> i & 1)
				ra(data);
			else
				pb(data);
			j++;
		}
		while (data->blen)
			pa(data);
		i++;
	}
}

void	sorting(t_list *data)
{
	if (data->alen == 3)
		three_sort(data);
	else if (data->alen == 5)
		five_sort(data);
	else
		radix_sort(data);
}
