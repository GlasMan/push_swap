/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_push_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoskun <scoskun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:31 by agunes            #+#    #+#             */
/*   Updated: 2022/05/20 16:21:47 by scoskun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int main(int argc, char **argv)
{
    t_list *test;

    test = malloc(sizeof(t_list));
    int i;
    int a = 0;
    int b = 0;
    int c = 0;
    int x = argc - 1;
    int mid = 0;
    int k = 0;
    test->ic = 0;
    test->count = 0;
    test->alen = x;
    test->stacka = malloc(sizeof(int) * x);
    test->stackb = malloc(sizeof(int) * x);
    test->fa1 = malloc(sizeof(int) * x);
    test->sorted = malloc(sizeof(int) * x);
    test->bchunk = (int **)malloc(sizeof(int *) * x);
    test->bchunk_l = malloc(sizeof(int) * x);
    test->blen = 0;
    i = 1;
    while (i <= x)
    {
        test->stacka[a] = atoi(argv[i]);
        i++;
        a++;
    }
    i = 0;
    while (!is_sorted(test->stacka, test->alen))
    {
        printf("%d. sıralama\n", i++);
        mid_sort(test);
    }
    return (0);
}