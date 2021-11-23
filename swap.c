/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:02:16 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/22 23:00:14 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack *stack)
{
	int	tmp;

	if (stack->size > 1)
	{
		tmp = stack->number[0];
		stack->number[0] = stack->number[1];
		stack->number[1] = tmp;
	}
}

void	swap(t_stack *stack, char c)
{
	ft_swap(stack);
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
}
