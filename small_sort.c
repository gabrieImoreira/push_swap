/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:25:16 by gantonio          #+#    #+#             */
/*   Updated: 2022/01/07 00:39:17 by gantonio         ###   ########.fr       */
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
}