#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

typedef	struct		s_stack
{
	int				*number;
	int				size;
}					t_stack;

void	create_stacks(t_pile *stack_a, t_pile *stack_b, int argc, char **argv);
#endif