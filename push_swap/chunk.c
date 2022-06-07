#include "push_swap.h"

int ft_max(t_data *lol)
{
	int nb;
	int i;
	i = 0;
	nb = lol->stack_b.stack[0];
	while (i < lol->stack_b.length)
	{
			if (lol->stack_b.stack[i] > nb)
				nb = lol->stack_b.stack[i];
		i++;
	}
	return(nb);
}

int ft_indx(int *idx, int nbr, int len)
{
	int j;

	j = 0;
	while (j < len)
	{
		if(idx[j] == nbr)
		{
			return (j);
		}
		j++;
	}
	return(-1);
}

int right_index(t_stack *lol, int nbr)
{
	t_list dx;
	int i;
	int x;

	x = 1;
	i = 0;
	dx.nbr = malloc(sizeof(int) * lol->length);
	while(lol->length > i)
	{
		dx.nbr[i] = lol->stack[i];
		i++;
	}
	ft_sort_int_tab(dx.nbr, lol->length);
	return(ft_indx(dx.nbr, nbr, lol->length));
}

int 	*minchunk(t_stack *lol, int size)
{
	int	*min;
	int x;
	int j;

	j = 0;
	x = 0;
	min = malloc(size * sizeof(int) +1);
	while (x < lol->length)
	{
		if (right_index(lol, lol->stack[x]) <= size)
		{
			min[j] = lol->stack[x];
			j++;
		}
		x++;
	}
	return (min);
}

void ft_chunk(t_data *lol)
{
	int	size;
	int *min;
	int i;
	int j;
	size = get_chunk_size(lol->stack_a.length);
	min = minchunk(&lol->stack_a, size);
	while(size > 0)
	{
		j = 0;
		i = 0;

		while (j <= lol->stack_a.length - 1)
		{
			if (min[i] == lol->stack_a.stack[j])
			{
				while(lol->stack_a.stack[lol->stack_a.length - 1] != min[i])
					rotate(&lol->stack_a, j, lol);
				ft_sort("pb", lol);
				j = -1;
				i++;
			}
			j++;
		}
		free(min);
		size = get_chunk_size(lol->stack_a.length);
		min = minchunk(&lol->stack_a, size);
	}
}