#include "push_swap.h"
void	ft_sort3(t_data *lol)
{
	int x;
	int y;
	int z;

	z = lol->stack_a.stack[2];
	y = lol->stack_a.stack[1];
	x = lol->stack_a.stack[0];
	if (x > z && y > x)
	{
		ft_sort("rra", lol);
		ft_sort("sa", lol);
	}
	else if (x > z && y < z)
		ft_sort("sa", lol);
	else if (z < y && y > x)
		ft_sort("rra", lol);
	else if (x > y && y < z)
	{
		ft_sort("rra", lol);
		ft_sort("rra", lol);
	}
	else if(x < y && y < z)
	{
		ft_sort("sa", lol);
		ft_sort("rra", lol);
	}
}

void ft_sort5(t_data *lol)
{
	int i;
	while(min_nmb(lol->stack_a.stack, &i, lol->stack_a.length))
		rotate(&lol->stack_a, i, lol);
	ft_sort("pb", lol);
	if (lol->length <= 5)
	{
		while(min_nmb(lol->stack_a.stack, &i, lol->stack_a.length))
			rotate(&lol->stack_a, i, lol);
		ft_sort("pb", lol);
	}
	if(lol->stack_b.stack[0] > lol->stack_b.stack[1])
		ft_sort("sb", lol);
	ft_sort3(lol);
	ft_sort("pa", lol);
	if(lol->length == 5)
		ft_sort("pa", lol);
}

void	final_sort(t_data *lol)
{
	int max;
	int j;
	int i;
	i = 0;

	max = ft_max(lol);
	j = 0;
	while (j < lol->stack_b.length)
	{
		max = ft_max(lol);
		if(max == lol->stack_b.stack[j])
		{
			while(max != lol->stack_b.stack[lol->stack_b.length - 1])
				rotate_b(&lol->stack_b, j, lol);
			ft_sort("pa", lol);
			j = -1;
		}
		j++;
	}
}