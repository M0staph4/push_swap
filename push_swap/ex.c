#include "push_swap.h"

void	ft_allswap(t_data *lol, char *ex)
{
	if (!ft_strncmp(ex, "sa", 2))
	{
		ft_swap(&(lol->stack_a));
		write(1, "sa\n", 3);
	}
	else if (!ft_strncmp(ex, "sb", 2))
	{
		ft_swap(&(lol->stack_b));
		write(1, "sb\n", 3);
	}
	else if (!ft_strncmp(ex, "ss", 2))
	{
		ft_swap(&(lol->stack_a));
		ft_swap(&(lol->stack_b));
		write(1, "ss\n", 3);
	}	
}

void	ft_allpush(t_data *lol, char *ex)
{
	if (!ft_strncmp(ex, "pa", 2))
	{
		ft_push(&(lol->stack_a), &(lol->stack_b));
		write(1, "pa\n", 3);
	}
	else if (!ft_strncmp(ex, "pb", 2))
	{
		ft_push(&(lol->stack_b), &(lol->stack_a));
		write(1, "pb\n", 3);
	}
}

void	ft_allrotate(t_data *lol, char *ex)
{
	if (!ft_strncmp(ex, "ra", 3))
	{
		ft_rotate(&(lol->stack_a));
		write(1, "ra\n", 3);
	}
	else if (!ft_strncmp(ex, "rb", 3))
	{
		ft_rotate(&(lol->stack_b));
		write(1, "rb\n", 3);
	}
	else if (!ft_strncmp(ex, "rr", 3))
	{
		ft_rotate(&(lol->stack_a));
		ft_rotate(&(lol->stack_b));
		write(1, "rr\n", 3);
	}
}

void ft_allrrotate(t_data *lol, char *ex)
{
	if (!ft_strncmp(ex, "rra", 3))
	{
		ft_rrotate(&(lol->stack_a));
		write(1, "rra\n", 4);
	}
	else if (!ft_strncmp(ex, "rrb", 3))
	{
		ft_rrotate(&(lol->stack_b));
		write(1, "rrb\n", 4);
	}
	else if (!ft_strncmp(ex, "rrr", 3))
	{
		ft_rrotate(&(lol->stack_a));
		ft_rrotate(&(lol->stack_b));
		write(1, "rrr\n", 4);
	}
}