#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
# include "../libft/libft.h"
# define ERR "Error\n"
# define MAX_INT 2147483647
# define MIN_INT -2147483647

typedef	struct		s_stack
{
	int				*number;
	int				size;
}					t_stack;

int		count_args(char **str);
int		is_sorted(t_stack *stack);
int		return_higher_pos(t_stack *stack);
int		return_lower_pos(t_stack *stack);
long long int	ft_atoi_ps(const char *nptr);
void	big_sort(t_stack *stack_a, t_stack *stack_b);
void	create_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv);
void	free_split(char **str, int size);
void	fill_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv);
void	get_pos(t_stack *stack_a);
void	medium_sort(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack, char c);
void	rotate(t_stack *stack, char c);
void	small_sort(t_stack *stack, char c);
void	smallest_sort(t_stack *stack, char c);
void	swap(t_stack *stack, char c);
void	push(t_stack *stack_a, t_stack *stack_b, char c);

#endif