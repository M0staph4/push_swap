#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}	
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (sign * nb);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void check_num(int ac, char **av)
{
    int i;
    while(--ac > 0)
    {
        i = 0;
        if (av[ac][i] == '-' || av[ac][i] == '+')
			i++;
        while (av[ac][i])
        {
            if (av[ac][i] < '0' || av[ac][i] > '9')
                error_msg();
            i++;
        }
    }
}