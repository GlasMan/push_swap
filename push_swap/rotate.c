#include "push_swap.h"


void ra(t_list *test)
{
    int x;
    x = test->alen;
    int i = 0;
    int temp = test->stacka[0];
    while (i < x)
    {
        test->stacka[i] = test->stacka[i + 1];
        i++;
    }
    test->stacka[x - 1] = temp;
    test->count++;
    printf("ra\n");
}

void rb(t_list *test)
{
    int x = test->blen;
    int i = 0;
    int temp = test->stackb[0];
    while (i < x)
    {
        test->stackb[i] = test->stackb[i + 1];
        i++;
    }
    test->stackb[x - 1] = temp;
    printf("rb\n");
}

void rra(t_list *test)
{
    int temp = test->stacka[test->alen - 1];
    test->stacka = shift_down(test->stacka, test->alen);
    test->stacka[0] = temp;
    test->count++;
    printf("rra\n");
}

void rrb(t_list *test)
{
    int temp = test->stackb[test->blen - 1];
    test->stackb = shift_down(test->stackb, test->blen);
    test->stackb[0] = temp;
    test->count++;
    printf("rrb\n");
}