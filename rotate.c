/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:33:26 by scoskun           #+#    #+#             */
/*   Updated: 2022/05/27 15:33:26 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *data)
{
	int	x;
	int	i;
	int	temp;

	x = data->alen;
	i = 0;
	temp = data->stacka[0];
	shift_up(data->stacka, data->alen);
	data->stacka[x - 1] = temp;
	ft_printf("ra\n");
}

void	rb(t_list *data)
{
	int	x;
	int	i;
	int	temp;

	i = 0;
	x = data->blen;
	temp = data->stackb[0];
	while (i < x)
	{
		data->stackb[i] = data->stackb[i + 1];
		i++;
	}
	data->stackb[x - 1] = temp;
	ft_printf("rb\n");
}

void	rr(t_list *data)
{
	int	x;
	int	temp;
	int	i;

	x = data->alen;
	temp = data->stacka[0];
	shift_up(data->stacka, data->alen);
	data->stacka[x - 1] = temp;
	x = data->blen;
	temp = data->stackb[0];
	i = 0;
	while (i < x)
	{
		data->stackb[i] = data->stackb[i + 1];
		i++;
	}
	data->stackb[x - 1] = temp;
	ft_printf("rr\n");
}

void	rra(t_list *data)
{
	int	temp;

	temp = data->stacka[data->alen - 1];
	data->stacka = shift_down(data->stacka, data->alen);
	data->stacka[0] = temp;
	ft_printf("rra\n");
}

void	rrb(t_list *data)
{
	int	temp;

	temp = data->stackb[data->blen - 1];
	data->stackb = shift_down(data->stackb, data->blen);
	data->stackb[0] = temp;
	ft_printf("rrb\n");
}
