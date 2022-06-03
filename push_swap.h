/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:35 by agunes            #+#    #+#             */
/*   Updated: 2022/06/02 16:02:10 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	char	**av;
	char	**split;
	int		*stacka;
	int		*stackb;
	int		*sorted;
	int		sorted_l;
	int		flag;
	int		blen;
	int		keep;
	int		alen;
	int		ic;
}		t_list;

void	pb(t_list *data);
void	pa(t_list *data);
void	ra(t_list *data);
void	rb(t_list *data);
void	rr(t_list *data);
void	rra(t_list *data);
void	rrb(t_list *data);
void	rrr(t_list *data);
void	sa(t_list *data);
void	sb(t_list *data);
void	ss(t_list *data);
void	shift_up(int *arr, int c);
void	sorted(t_list *data);
void	ft_exit(t_list *data, int flag);
void	is_double(t_list *data);
void	setup(t_list *data);
void	sorting(t_list *data);
void	three_sort(t_list *data);
void	check_create(t_list *data);
void	create(t_list *data);
char	**ft_split(char const *s, char c);
int		*shift_down(int *arr, int l);
int		ft_atoi(const char *str, t_list *data);
int		is_sorted(t_list *data);
int		is_ascending(int *arr, int l);
int		find_max_bit(t_list *data);
int		find_index(t_list *data, int tf);

#endif
