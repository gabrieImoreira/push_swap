#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
# include "../libft/libft.h"

typedef	struct		s_stack
{
	int				*number;
	int				size;
}					t_stack;

int		count_args(char **str);
void	create_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv);
void	free_split(char **str, int size);

#endif