#include "push_swap.h"

void sa(t_list *test)
{
    int temp = test->stacka[0];
    test->stacka[0] = test->stacka[1];
    test->stacka[1] = temp;
    printf("sa\n");
}

void sb(t_list *test)
{
    int temp = test->stackb[0];
    test->stackb[0] = test->stackb[1];
    test->stackb[1] = temp;
    printf("sb\n");
}