#include "push_swap.h"

int    ft_pop(t_stack *lol)
{
    int i;

    i = 0;
    if(lol->length != 0)
    {
        i = lol->stack[lol->length - 1];
        lol->length -= 1;
    }
    return(i);
}

void ft_swap(t_stack *lol)
{
    int i;
    int j;
	if(lol->length >= 2)
	{
    	i = ft_pop(lol);
    	j = ft_pop(lol);
		push2a(i, lol);
		push2a(j, lol);
	}
}

void	ft_push(t_stack *a, t_stack *b)
{
	int i;
	if (b->length)
	{
		i = ft_pop(b);
		push2a(i, a);
	}
}

void	ft_rotate(t_stack *lol)
{
	int i;
	int j;
	i = lol->length - 1;
	j = lol->stack[i];
	while(i)
	{
		lol->stack[i] = lol->stack[i - 1];
		i--;
	}
	lol->stack[0] = j;
}

void ft_rrotate(t_stack *lol)
{
	int i;
	int j;
	j = lol->stack[0];
	i = 0;
	while(i < lol->length)
	{
		lol->stack[i] = lol->stack[i + 1];
		i++;
	}
	lol->stack[lol->length - 1] = j;
}

void push2a(int nmr, t_stack *lol)
{
    lol->stack[lol->length] = nmr;
    lol->length += 1;
}