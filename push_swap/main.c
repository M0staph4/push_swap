#include "push_swap.h"

void	ft_sort(char *ex, t_data *lol)
{
	ft_allswap(lol, ex);
	ft_allpush(lol, ex);
	ft_allrrotate(lol, ex);
	ft_allrotate(lol, ex);
}

int	get_chunk_size(int i)
{
	if (i <= 3)
		return (i / 2);
	else if (i < 30)
		return (i / 2);
	else if (i < 50)
		return (i / 2);
	else if (i < 100)
		return (i / 2);
	else if (i < 200)
		return(i / 4);
	else if (i <= 500)
		return (i / 5);
	return (0);
}

void	push_swap(t_data *lol)
{
	if (lol->stack_a.length == 2)
		ft_sort("sa", lol);
	else if (lol->stack_a.length == 3)
		ft_sort3(lol);
	else if (lol->stack_a.length <= 5)
		ft_sort5(lol);
	else
		ft_chunk(lol);
}

int main(int ac, char **av)
{
    t_data lol;
    check_num(ac, av);
    creat_stack(&lol, ac, av);
    check_error(&lol, ac);
	push_swap(&lol);
	final_sort(&lol);
}