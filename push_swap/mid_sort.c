#include "push_swap.h"

void	mid_sort(t_list *test)
{
	int da = 0;
	int hmn = 0;
	int mid = 0;
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	 while (test->alen > 2)
    {
        test->sorted = sorted(test->stacka, test->alen);
        mid = test->sorted[test->alen / 2];
        hmn = find_hmn(test, mid);
        test->chunk[a] = malloc(sizeof(int) * hmn);
        while (test->ic < hmn)
        {
            if (test->stacka[0] >= mid)
                ra(test);
            else
            {
                test->chunk[a][b++] = test->stacka[0];
                pb(test);
            }
        }
        a++;
        test->chunk_l[c++] = b;
        b = 0;
        test->ic = 0;
    }
    a--;
    c--;
    test->ic = 0;
    if (test->stacka[0] > test->stacka[1])
        sa(test);
    while (test->blen >= 0 && a >= 0)
    {
        test->sorted = sorted(test->chunk[a], test->chunk_l[c]);
        mid = test->sorted[test->chunk_l[c] / 2];

        while (test->chunk_l[c] >= 0 && c >= 0)
        {
            if (test->stackb[0] < mid && test->chunk_l[c] != 1)
            {
                da++;
                rb(test);
            }
            if (test->chunk_l[c] == 1)
            {
                pa(test);
                break;
            }
            else
            {
                if (test->stackb[0] < test->stackb[1])
                    sb(test);
                pa(test);
                test->chunk_l[c]--;
                while (da > 0)
                {
                    rrb(test);
                    da--;
                }
            }
            i = 0;
        }
        if (test->stacka[0] > test->stacka[1])
            sa(test);
        a--;
        c--;
    }
}