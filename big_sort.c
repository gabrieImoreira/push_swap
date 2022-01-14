/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:16:21 by gantonio          #+#    #+#             */
/*   Updated: 2022/01/13 22:21:15 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bit_ops(t_stack *stack_a, t_stack *stack_b, int pos, int size)
{
	int	j;
	int	top;

	j = 0;
	while (j < size)
	{
		top = stack_a->number[0];
		if (((top >> pos)&1) == 1)
			rotate(stack_a, 'a');
		else
			push(stack_b, stack_a, 'b');
		j++;
	}
}
void	big_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	size;

	size = stack_a->size;
	i = 0;
	get_pos(stack_a);
	while (!is_sorted(stack_a))
	{
		bit_ops(stack_a, stack_b, i, size);
		while (stack_b->size != 0)
			push(stack_a, stack_b, 'a');
		i++;
	}
}