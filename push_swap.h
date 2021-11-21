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
long long int	ft_atoi_ps(const char *nptr);
void	create_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv);
void	free_split(char **str, int size);
void	insert_args_to_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv);
void	swap(t_stack *stack, char c);

#endif