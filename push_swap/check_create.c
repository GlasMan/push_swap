/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:24:51 by scoskun           #+#    #+#             */
/*   Updated: 2022/06/02 18:21:48 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup(t_list *data)
{
	data->stacka = malloc(sizeof(int) * data->alen);
	data->stackb = malloc(sizeof(int) * data->blen);
	data->sorted = malloc(sizeof(int) * data->alen);
	data->flag = 0;
	create(data);
	sorted(data);
	is_double(data);
	is_sorted(data);
}

void	create(t_list *data)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (data->av[i])
	{
		data->split = ft_split(data->av[i], ' ');
		j = 0;
		while (data->split[j])
		{
			data->stacka[k++] = ft_atoi(data->split[j], data);
			free(data->split[j]);
			j++;
		}
		if (data->split)
			free(data->split);
		i++;
	}
}

void	check_create(t_list *data)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 1;
	k = 0;
	while (data->av[i])
	{
		data->split = ft_split(data->av[i], ' ');
		j = 0;
		while (data->split[j] != NULL)
		{
			ft_atoi(data->split[j], data);
			free(data->split[j++]);
			k++;
		}
		if (data->split)
			free(data->split);
		i++;
	}
	data->alen = k;
	data->keep = k;
	data->blen = 0;
	setup(data);
}
