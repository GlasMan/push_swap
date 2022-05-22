/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:35 by agunes            #+#    #+#             */
/*   Updated: 2022/05/20 16:17:50 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	int *stacka;
	int *fa1;
	int *sorted;
	int *stackb;
	int	**chunk;
	int *chunk_l;
	int blen;
	int tut;
	int alen;
	int ic;
	int count;
}           t_list;

void	mid_sort(t_list *test);
void	pb(t_list *test);
void	pa(t_list *test);
void	ra(t_list *test);
void	rb(t_list *test);
void	rra(t_list *test);
void	rrb(t_list *test);
void	sa(t_list *test);
void	sb(t_list *test);
void	shift_up(int *arr, int c);
int		*shift_down(int *arr, int l);
int		*sorted(int *arr, int l);
int		is_sorted(int *arr, int l);
int		find_min(t_list *test);
int		find_hmn(t_list *test, int mid);
int		find_hmn2(t_list *test, int mid);

#endif