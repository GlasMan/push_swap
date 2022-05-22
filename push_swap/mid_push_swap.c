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
    int da = 0;
    int hmn = 0;
    test->alen = x;
    test->stacka = malloc(sizeof(int) * x);
    test->stackb = malloc(sizeof(int) * x);
    test->fa1 = malloc(sizeof(int) * x);
    test->sorted = malloc(sizeof(int) * x);
    test->mids = (int **)malloc(sizeof(int *) * x);
    test->mids2 = malloc(sizeof(int) * x);
    test->blen = 0;
    i = 1;
    while (i <= x)
    {
        test->stacka[a] = atoi(argv[i]);
        i++;
        a++;
    }
    i = 0;
    a = 0;
    while (test->alen > 2)
    {
        test->sorted = sorted(test->stacka, test->alen);
        mid = test->sorted[test->alen / 2];
        hmn = find_hmn(test, mid);
        for (i = 0; i < test->blen; i++)
            printf("%d ", test->stackb[i]);
        i = 0;
        printf("\nmid = %d hmn = %d son = %d\n", mid, hmn, test->stacka[test->alen - 1]);
        test->mids[a] = malloc(sizeof(int) * hmn);
        while (test->ic < hmn)
        {
            if (test->stacka[0] >= mid)
                ra(test);
            else
            {
                test->mids[a][b++] = test->stacka[0];
                pb(test);
            }
        }
        a++;
        test->mids2[c++] = b;
        b = 0;
        test->ic = 0;
    }
    a--;
    c--;
    test->ic = 0;
    if (test->stacka[0] > test->stacka[1])
        sa(test);
    printf("Diğer While stack =\n");
    for (i = 0; i < test->alen; i++)
        printf("%d ", test->stacka[i]);
    printf("\n");
    while (test->blen >= 0 && a >= 0)
    {
        test->sorted = sorted(test->mids[a], test->mids2[c]);
        mid = test->sorted[test->mids2[c] / 2];
        int o = 0;
        printf("Dongu Basi mid = %d\n", mid);
        for (i = 0; i < test->blen; i++)
            printf("%d ", test->stackb[i]);
        printf("\n");
        while (test->mids2[c] >= 0 && o < 6 && c >= 0)
        {
            if (test->stackb[0] < mid && test->mids2[c] != 1)
            {
                da++;
                rb(test);
            }
            if (test->mids2[c] == 1)
            {
                pa(test);
                for (i = 0; i < test->alen; i++)
                    printf("%d ", test->stacka[i]);
                printf("\n");
                break;
            }
            else
            {
                if (test->stackb[0] < test->stackb[1])
                    sb(test);
                pa(test);
                test->mids2[c]--;
                while (da > 0)
                {
                    rrb(test);
                    da--;
                }
            }
            o++;
            i = 0;
        }
        if (is_sorted(test->stacka, test->alen))
            sa(test);
        a--;
        c--;
    }
    pa(test);
    for (i = 0; i < test->alen; i++)
        printf("[%d] [%d]\n", test->stacka[i], test->stackb[i]);
    return (0);
}

/*     i = 0;
    while (i < test->blen)
    {
        printf("[%d]    [%d]\n", test->stacka[i], test->stackb[i]);
        i++;
    }
    printf("mids =\n");
    for (i = 0; i < a; i++)
    {
        printf("\n");
        for (int j = 0; j < 6; j++)
            printf("%d ", test->mids[i][j]);
    } */