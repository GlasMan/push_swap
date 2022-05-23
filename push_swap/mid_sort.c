#include "push_swap.h"


void    create_chunkB(t_list *test)
{
    int da = 0;
	int hmn = 0;
	int mid = 0;
	int a = 0;
	int b = 0;
	int c = 0;
    while (test->alen > 2)
    {
        test->sorted = sorted(test->stacka, test->alen);
        mid = test->sorted[test->alen / 2];
        hmn = find_hmn(test, mid);
        test->bchunk[a] = malloc(sizeof(int) * hmn);
        while (test->ic < hmn)
        {
            if (test->stacka[0] >= mid)
                ra(test);
            else
            {
                test->bchunk[a][b++] = test->stacka[0];
                if(test->stacka[0] > test->stacka[1] && test->stacka[0] != 0)
                    sa(test);
                pb(test);
                if (test->stackb[0] < test->stackb[1] && test->stackb[0] != 0)
                    sb(test);
            if(is_ascending(test->stackb, test->blen) && is_sorted(test->stacka, test->alen))
            {
                while (test->blen)
                    pa(test);
                printf("adım sayısı = %d\n", test->count);
                exit(1);
            }
            }
        }
        a++;
        test->bchunk_l[c++] = b;
        b = 0;
        test->ic = 0;
    }
    if (test->stacka[0] > test->stacka[1] && test->stacka[0] != 0)
        sa(test);
    if(is_ascending(test->stackb, test->blen))
    {
        while (test->blen)
        {
            pa(test);
        }
        printf("adım sayısı = %d\n", test->count);
        exit(1);
    }
    test->all = a - 1;
    test->bll = c - 1;
}

//void    create_chunkA()

void	mid_sort(t_list *test)
{
	int da = 0;
	int hmn = 0;
	int mid = 0;
	int i = 0;
	int a = 0;
    int flag = 0;
    int temp = 0;
	int b = 0;
	int c = 0;
    create_chunkB(test);
    while (test->blen > 0 && test->all >= 0)
    {
        test->sorted = sorted(test->bchunk[test->all], test->bchunk_l[test->bll]);
        mid = test->sorted[test->bchunk_l[test->bll] / 2];
        hmn = find_hmn2(test, mid);
        while (test->bchunk_l[test->bll] >= 0 && test->bll >= 0)
        {
            if(test->stackb[0] < mid && test->bchunk_l[test->bll] != 1)
            {
                rb(test);
                flag == 1;
                da++;
            }
            if (test->bchunk_l[test->bll] == 1)
            {
                if (test->stackb[1] > test->stackb[0]  && test->stackb[0] != 0)
                    sb(test);
                pa(test);
                if (test->stacka[1] < test->stacka[0])
                    sa(test);
                break;
            }
            else
            {
                if (test->stackb[0] < test->stackb[1]  && test->stackb[0] != 0)
                    sb(test);
                pa(test);
                if (test->stacka[0] > test->stacka[1])
                    sa(test);
                test->bchunk_l[test->bll]--;
                while (da > 0)
                {
                    rrb(test);
                    da--;
                }
            }
        }
        if (test->stacka[0] > test->stacka[1] && test->stacka[0] != 0)
            sa(test);
        test->all--;
        test->bll--;
    }
}