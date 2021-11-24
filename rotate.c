/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:17:44 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/23 23:35:51 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	i = -1;
	tmp = stack->number[0];
	while (++i < stack->size - 1)
		stack->number[i] = stack->number[i + 1];
	stack->number[i] = tmp;
}

void	rotate(t_stack *stack, char c)
{
	ft_rotate(stack);
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}