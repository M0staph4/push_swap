#include "push_swap.h"
void    error_msg()
{
    write(2, "Error\n", 7);
    exit(0);
}

void    check_is_sorted(t_stack *lol)
{
    int i;
    int x;
    x = 0;
    i = 0;
    while (i < lol->length)
    {
        if (lol->stack[i] < lol->stack[i + 1])
            x++;
        i++;
    }
    if (!x)
        error_msg();
}

void check_double(t_stack *lol)
{
    int i;
	int j;
    i = 0;
    while(i < lol->length - 1)
	{
		j = i + 1;
		while(j < lol->length)
		{
			if(lol->stack[i] == lol->stack[j])
				error_msg();
			j++;
		}
		i++;
	}
}

void    check_error(t_data *lol, int ac)
{
    int i;
    i = 0;
    while (i < ac)
    {
        if (lol->stack_a.stack[i] > 2147483647 || lol->stack_a.stack[i] < -2147483648)
            error_msg();
        i++;
    }
    check_is_sorted(&lol->stack_a);
    check_double(&lol->stack_a);
}