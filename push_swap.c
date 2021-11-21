/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:04:47 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/21 18:06:43 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2)
		exit (0);
	create_stack(&stack_a, &stack_b, argc, argv);
	insert_args_to_stack(&stack_a, &stack_b, argc, argv);


	int x;
	printf("stack a, size: %d\n", stack_a.size);
	for(x = 0; x < stack_a.size; x++)
	{
		printf("%d ", stack_a.number[x]);
	}
	printf("\nW/ SWAP: stack a, size: %d\n", stack_a.size);
	swap(&stack_a, 'a');
	for(x = 0; x < stack_a.size; x++)
	{
		printf("%d ", stack_a.number[x]);
	}
	printf("\n\nstack b, size: %d\n", stack_b.size);
	for(x = 0; x < stack_b.size; x++)
	{
		printf("%d ", stack_b.number[x]);
	}
	
	free(stack_a.number);
	free(stack_b.number);
}
