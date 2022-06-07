#include "push_swap.h"

void	ft_rrbrb(t_data *lol, int i, t_stack *lool)
{
	if(lol->length < 100)
	{
		if(i > (lool->length / 3))
			ft_sort("rb", lol);
		else
			ft_sort("rrb", lol);
	}
	else
	{
		if(i > (lool->length / 5))
			ft_sort("rb", lol);
		else
			ft_sort("rrb", lol);
	}
}

void rotate_b(t_stack *lol, int i, t_data *lool)
{
	if(lol->length <= 5)
	{
		if(i > (lol->length / 2))
			ft_sort("rb", lool);
		else
			ft_sort("rrb", lool);
	}
	else
		ft_rrbrb(lool, i, lol);
}