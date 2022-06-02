/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:39:15 by scoskun           #+#    #+#             */
/*   Updated: 2022/05/27 15:39:15 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *data)
{
	int	temp;

	if (data->alen >= 2)
	{
		temp = data->stacka[0];
		data->stacka[0] = data->stacka[1];
		data->stacka[1] = temp;
		ft_printf("sa\n");
	}
}

void	sb(t_list *data)
{
	int	temp;

	if (data->blen >= 2)
	{
		temp = data->stackb[0];
		data->stackb[0] = data->stackb[1];
		data->stackb[1] = temp;
		ft_printf("sb\n");
	}
}
