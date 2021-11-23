/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:32:59 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/22 23:44:43 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = stack_b->size;
	if (stack_a->size > 0)
	{
		if (i != 0)
		{
			while (i > 0)
			{
				stack_b->number[i] = stack_b->number[i - 1];
				i--;
			}
			stack_b->number[0] = stack_a->number[0];
		}
		stack_b->number[0] = stack_a->number[0];
		i = -1;
		while (++i < stack_a->size - 1)
			stack_a->number[i] = stack_a->number[i + 1];
		stack_b->size++;
		stack_a->size--;
		return (1);
	}
	return (0);
}

void	push(t_stack *stack_a, t_stack *stack_b, char c)
{
	ft_push(stack_a, stack_b);
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}
