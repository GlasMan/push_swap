/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:25:10 by scoskun           #+#    #+#             */
/*   Updated: 2022/05/27 15:25:10 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_up(int *arr, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = 0;
}

int	*shift_down(int *arr, int l)
{
	int	i;
	int	temp;
	int	*arr1;

	i = 1;
	arr1 = malloc(sizeof(int) * l + 4);
	arr1[0] = 0;
	temp = arr[l - 1];
	while (i < l)
	{
		arr1[i] = arr[i - 1];
		i++;
	}
	arr1[i] = temp;
	free(arr);
	return (arr1);
}

void	pb(t_list *data)
{
	if (data->alen != 0)
	{
		data->blen++;
		data->stackb = shift_down(data->stackb, data->blen);
		data->stackb[0] = data->stacka[0];
		data->alen--;
		data->ic++;
		shift_up(data->stacka, data->alen);
		ft_printf("pb\n");
	}
}

void	pa(t_list *data)
{
	if (data->blen != 0)
	{
		data->alen++;
		data->stacka = shift_down(data->stacka, data->alen);
		data->stacka[0] = data->stackb[0];
		data->blen--;
		shift_up(data->stackb, data->blen);
		ft_printf("pa\n");
	}
}
