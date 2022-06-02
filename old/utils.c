#include "push_swap.h"

int *sorted(int *arr, int l)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int *arr1 = malloc(sizeof(int) * l);
    while (i < l)
    {
        arr1[i] = arr[i];
        i++;
    }
    i = 0;
    while (i < l)
    {
        j = 0;
        while (j < l)
        {
            if (arr1[i] < arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
            j++;
        }
        i++;
    }
    return arr1;
}

int is_sorted(int *arr, int l)
{
    int i = 0;
    int j = 0;

    while (i < l)
    {
        if (arr[i] > arr[i + 1] && i + 1 < l)
            return 0;
        i++;
    }
    return 1;
}

int is_ascending(int *arr, int l)
{
    int i = 0;
    int j = 0;

    while (i < l)
    {
        if (arr[i] < arr[i + 1] && i + 1 < l)
            return 0;
        i++;
    }
    return 1;
}



int find_min(t_list *test)
{
    int min = test->stacka[0];
    int i = 0;
    int x = test->alen;
    i = 0;
    while (i < x)
    {
        if (test->stacka[i] < min)
            min = test->stacka[i];
        i++;
    }
    return (min);
}

int find_hmn(t_list *test, int mid)
{
    int i = 0;
    while (i < test->alen)
    {
        if (test->sorted[i] == mid)
            break;
        i++;
    }
    if(i != 0)
        return i;
    return 1;
}

int find_hmn2(t_list *test, int mid)
{
    int i = test->alen;
    while (i >= 0)
    {
        if (test->sorted[i] == mid)
            break;
        i--;
    }
    return i;
}
