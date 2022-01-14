/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:04:47 by gantonio          #+#    #+#             */
/*   Updated: 2022/01/13 22:04:53 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void verify_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size < 1)
		write(1, ERR, 7);
	if (stack_a->size == 2)
		smallest_sort(stack_a, 'a');
	if (stack_a->size == 3)
		small_sort(stack_a, 'a');
	if (stack_a->size == 5 || stack_a->size == 4)
		medium_sort(stack_a, stack_b);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2)
		exit (0);
	create_stack(&stack_a, &stack_b, argc, argv);
	fill_stack(&stack_a, &stack_b, argc, argv);
	if (stack_a.size == 0 || stack_a.size == 1)
		return (free(stack_a.number), free(stack_b.number), exit(0), 0);
	if (!is_sorted(&stack_a))
		verify_stack(&stack_a, &stack_b);
	free(stack_a.number);
	free(stack_b.number);
	return (0);
}
