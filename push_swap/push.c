#include "push_swap.h"

void shift_up(int *arr, int c)
{
    int i = 0;
    int x = c;
    while (i < x)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    arr[i] = 0;
}

int *shift_down(int *arr, int l)
{
    int i;
    int temp;
    int *arr1;

    i = 1;
    arr1 = malloc(sizeof(int) * l + 1);
    arr1[0] = 0;
    temp = arr[l - 1];
    while (i < l)
    {
        arr1[i] = arr[i - 1];
        i++;
    }
    arr1[i] = temp;
    return arr1;
}


void pb(t_list *test)
{
    test->blen++;
    test->stackb = shift_down(test->stackb, test->blen);
    test->stackb[0] = test->stacka[0];
    test->alen--;
    shift_up(test->stacka, test->alen);
    test->count++;
    test->ic++;
    printf("pb\n");
}

void pa(t_list *test)
{
    test->alen++;
    test->stacka = shift_down(test->stacka, test->alen);
    test->stacka[0] = test->stackb[0];
    test->blen--;
    shift_up(test->stackb, test->blen);
    test->count++;
    test->ic++;
    printf("pa\n");
}