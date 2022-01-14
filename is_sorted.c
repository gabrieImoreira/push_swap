/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:07:19 by gantonio          #+#    #+#             */
/*   Updated: 2022/01/13 22:01:23 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size - 1)
	{
		if (stack->number[i] > stack->number[i + 1])
			return (0);
		i++;
	}
	return (1);
}

static void	swap_array(t_stack *stack_a, int *pos_array)
{
	int	i;

	i = 0;
	while (i < stack_a->size)
	{
		stack_a->number[i] = pos_array[i];
		i++;
	}	
}

void	get_pos(t_stack *stack_a)
{
	int	*pos;
	int	i;
	int	j;

	i = 0;
	pos = malloc(sizeof(int) * stack_a->size);
	while (i < stack_a->size)
	{
		j = 0;
		pos[i] = 0;
		while (j < stack_a->size)
		{
			if (stack_a->number[i] > stack_a->number[j])
				pos[i]++;
			j++;
		}
		i++;
	}
	swap_array(stack_a, pos);
	free(pos);
}
