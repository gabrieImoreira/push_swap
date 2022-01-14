/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:39:57 by gantonio          #+#    #+#             */
/*   Updated: 2022/01/13 21:43:53 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	medium_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	size;

	i = 0;
	size = stack_a->size;
	get_pos(stack_a);
	while (i < size)
	{
		if (stack_a->number[0] >= 3)
			push(stack_b, stack_a, 'b');
		else
			rotate(stack_a, 'a');
		i++;
	}
	if (!is_sorted(stack_a))
		small_sort(stack_a, 'a');
	if (!is_sorted(stack_b))
		swap(stack_b, 'b');
	while (stack_b->size > 0)
	{
		push(stack_a, stack_b, 'a');
		rotate(stack_a, 'a');
	}
}
