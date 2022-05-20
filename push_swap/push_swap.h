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
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	int *stacka;
	int *fa1;
	int *sorted;
	int *stackb;
	int	*mids;
	int *mids2;
	int blen;
	int tut;
	int alen;
	int ic;
	int count;
}           t_list;

#endif