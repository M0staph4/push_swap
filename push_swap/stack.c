#include "push_swap.h"

t_stack stacklist(int ac, t_stack *lol)
{
    lol->length = 0;
    lol->stack = (int*)malloc((ac * 4) + 1);
    return(*lol);
}

void creat_stack(t_data *lol, int ac, char **av)
{
    int i;

    lol->stack_a = stacklist(ac - 1, &lol->stack_a);
    lol->stack_b = stacklist(ac - 1, &lol->stack_b);
    lol->length = ac - 1;
    i = ac - 1;
    while(i > 0)
	{
        push2a(ft_atoi(av[i]), &lol->stack_a);
		i--;
	}
}