/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:20:35 by scoskun           #+#    #+#             */
/*   Updated: 2022/06/03 17:10:03 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_list *data, int flag)
{
	int	i;

	i = 0;
	(void)flag;
	if (data->stacka)
		free(data->stacka);
	if (data->stackb)
		free(data->stackb);
	if (data->sorted)
		free(data->sorted);
	if (data->flag == 2)
	{
		while (data->split[i])
			free(data->split[i++]);
		if (data->split)
			free(data->split);
	}
	if (data->flag != 0)
		ft_printf("Error\n");
	free(data);
	exit(1);
}

int	main(int ac, char **av)
{
	t_list	*data;

	if (ac >= 2)
	{
		data = malloc(sizeof(t_list));
		data->av = av;
		check_create(data);
		sorting(data);
		ft_exit(data, data->flag = 0);
	}
	else
		return (0);
}
