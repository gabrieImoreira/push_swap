/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:25:16 by gantonio          #+#    #+#             */
/*   Updated: 2022/01/10 21:57:42 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smallest_sort(t_stack *stack, char c)
{
	if (stack->number[0] > stack->number[1])
		swap(stack, c);
}

void small_sort(t_stack *stack, char c)
{
	int	high;
	int	low;
	
	high = return_higher_pos(stack);
	low = return_lower_pos(stack);
	if (high == 2 && low == 1)
		swap(stack, c);
	else if (high == 0 && low == 2)
	{
		rotate(stack, c);
		swap(stack, c);
	}
	else if (high == 1 && low == 2)
		reverse_rotate(stack, c);
	else if (high == 1 && low == 0)
	{
		reverse_rotate(stack, c);
		swap(stack, c);
	}
	else
		rotate(stack, 'a');
}