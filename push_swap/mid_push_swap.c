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


void	sa(t_list *test)
{
	int temp = test->stacka[0];
	test->stacka[0] = test->stacka[1];
	test->stacka[1] = temp;
	printf("sa\n");
}

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
            if(arr1[i] < arr1[j])
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
        j = 0;
        while (j < l)
        {
            if(arr[i] > arr[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

int	*shift_down(int *arr, int l)
{
	int i;
	int temp;
	int *arr1;

	i = 1;
	arr1 = malloc(sizeof(int) * l);
	arr1[0] = 0;
	while(i < l)
	{
		arr1[i] = arr[i - 1];
		i++;
	}
	return arr1;
}

int find_index(t_list *test, int a)
{
    int i;

    i = 0;
    while(i < test->tut)
    {
        if(a == test->stacka[i])
            break;
        i++;
    }
    return i;
}


void    shift_up(int *arr, int c)
{
    int i = 0;
    int x = c;
    while(i < x)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    arr[i] = 0;
}

void	ra(t_list *test)
{
    int x;
    x = test->alen;
    int i = 0;
    int temp = test->stacka[0];
    while(i < x)
    {
        test->stacka[i] = test->stacka[i + 1];
        i++;
    }
    test->stacka[x - 1] = temp;
    test->count++;
    printf("ra\n");
}

void	rb(t_list *test)
{
    int x = test->blen;
    int i = 0;
    int temp = test->stackb[0];
    while(i < x)
    {
        test->stackb[i] = test->stackb[i + 1];
        i++;
    }
    test->stackb[x - 1] = temp;
}

void rra(t_list *test)
{
    int temp = test->stacka[test->alen - 1];
    test->stacka = shift_down(test->stacka, test->alen);
    test->stacka[0] = temp;
    test->count++;
    printf("rra\n");
}


void    pb(t_list *test)
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
    printf("pa\n");
/*     int c;
    c = test->blen;
    while(c + 1)
    {
        test->stacka[c + 1] = test->stacka[c];
        c--;
    }
    test->stacka[0] = test->stackb[0];
	test->blen--;
    test->alen++; */
}

int find_min(t_list *test)
{
    int min = test->stacka[0];
    int i = 0;
    int x = test->alen;
    i = 0;
    while(i < x)
    {
        if(test->stacka[i] < min)
            min = test->stacka[i];
        i++;
    }
    return (min);
}

int 	find_hmn(t_list *test, int mid)
{
	int i = 0;
	while (i < test->alen)
	{
		if(test->sorted[i] == mid)
			break;
		i++;
	}
	return i;
}


int main(int argc, char **argv)
{
	t_list	*test;

	test = malloc(sizeof(t_list));
	int i;
	int a = 0;
    int f = 0;
    int tut = argc - 1;
	int x = argc - 1;
    int mid = 0;
	int	k = 0;
	int xn = 0;
	test->ic = 0;
	int hmn = 0;
    test->tut = argc - 1;
    test->alen = x;
	test->stacka = malloc(sizeof(int) * x);
	test->stackb = malloc(sizeof(int) * x);
    test->fa1 = malloc(sizeof(int) * x);
    test->sorted = malloc(sizeof(int) * x);
	test->mids = malloc(sizeof(int) * x);
	test->mids2 = malloc(sizeof(int) * x);
    test->blen = 0;
	i = 1;
	while(i <= x)
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
		for(i = 0; i < test->alen; i++)
			printf("%d ", test->sorted[i]);
		i = 0;
		printf("\nmid = %d hmn = %d\n", mid, hmn);
		while (test->ic < hmn)
		{
			if(test->stacka[0] >= mid)
				ra(test);
			else if(test->stacka[test->alen] == mid)
			{
				rra(test);
				pb(test);
			}
			else
			{
				test->mids[a++] = test->stacka[0];
				pb(test);
			}
		}
		test->mids = sorted(test->mids, a);
		test->mids2[k++] = test->mids[a / 2];
		a = 0;
		test->ic = 0;
	}
	if(is_sorted(test->stacka, test->alen))
		sa(test);
	i = 0;
	printf("\nmids:\n");
	for(i = 0; i < k; i++)
		printf("%d ", test->mids2[i]);
	printf("\n");
	i = 0;
    while(i < tut)
    {
        printf("[%d] [%d]\n", test->stacka[i], test->stackb[i]);
        i++;
    }
    printf("count = %d\n", test->count);
	return (0);
}
