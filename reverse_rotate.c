/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:46:32 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/24 00:05:08 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reverse_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	i = stack->size - 1;
	tmp = stack->number[i];
	while (i > 0)
	{
		stack->number[i] = stack->number[i - 1];
		i--;
	}
	stack->number[i] = tmp;	
}

void	reverse_rotate(t_stack *stack, char c)
{
	ft_reverse_rotate(stack);
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}