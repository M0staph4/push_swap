#include "push_swap.h"

int	min_nmb(int *lol, int *idx, int size)
{
	int i;
	int j;
	int x;

	x = 0;
	i = 0;
	j = lol[0];
	while(i < size)
	{
		if(j > lol[i])
		{
			j = lol[i];
			x = i;
		}
		i++;
	}
	*idx = x;
	return(size - x - 1);
}

void	ft_rrara(t_data *lol, int i, t_stack *lool)
{
	if(lol->length < 100)
	{
		if(i > (lool->length / 3))
			ft_sort("ra", lol);
		else
			ft_sort("rra", lol);
	}
	else
	{
		if(i > (lool->length / 5))
			ft_sort("ra", lol);
		else
			ft_sort("rra", lol);
	}
}

void rotate(t_stack *lol, int i, t_data *lool)
{
	if(lol->length <= 5)
	{
		if(i > (lol->length / 2))
			ft_sort("ra", lool);
		else
			ft_sort("rra", lool);
	}
	else
		ft_rrara(lool, i, lol);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	s;

	x = 0 ;
	while (x < size)
	{
		y = x + 1;
		while (y < size)
		{
			if (tab[x] > tab[y])
			{
				s = tab[x];
				tab[x] = tab[y];
				tab[y] = s;
			}
			y++;
		}
		x++;
	}
}
