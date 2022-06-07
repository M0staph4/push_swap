#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct s_stack
{
	int			length;
	int			*stack;
	int 		*idx;
}	t_stack;

typedef struct s_data
{
	t_stack     stack_a;
	t_stack     stack_b;
	int			length;
	int			x;
}	t_data;

typedef struct s_list
{
	int idx;
	int *nbr;
	int pos;
}	t_list;

int	ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void check_num(int ac, char **av);
void    error_msg();
void    check_is_sorted(t_stack *lol);
void check_double(t_stack *lol);
void    check_error(t_data *lol, int ac);

int    ft_pop(t_stack *lol);
void ft_swap(t_stack *lol);
void	ft_push(t_stack *a, t_stack *b);
void	ft_rotate(t_stack *lol);
void ft_rrotate(t_stack *lol);
void push2a(int nmr, t_stack *lol);
void	ft_allswap(t_data *lol, char *ex);
void	ft_allpush(t_data *lol, char *ex);
void	ft_allrotate(t_data *lol, char *ex);
void ft_allrrotate(t_data *lol, char *ex);
void creat_stack(t_data *lol, int ac, char **av);
t_stack stacklist(int ac, t_stack *lol);
int	min_nmb(int *lol, int *idx, int size);
void	ft_rrara(t_data *lol, int i, t_stack *lool);
void rotate(t_stack *lol, int i, t_data *lool);
void	ft_sort_int_tab(int *tab, int size);
void	ft_sort3(t_data *lol);
void ft_sort5(t_data *lol);
int 	*minchunk(t_stack *lol, int size);
void ft_chunk(t_data *lol);
void	ft_sort(char *ex, t_data *lol);
int ft_indx(int *idx, int nbr, int len);
int	get_chunk_size(int i);
int right_index(t_stack *lol, int nbr);
void	push_swap(t_data *lol);
void	final_sort(t_data *lol);
int ft_max(t_data *lol);
void rotate_b(t_stack *lol, int i, t_data *lool);


#endif