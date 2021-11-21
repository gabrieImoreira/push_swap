/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:32:59 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/21 18:02:58 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_push(t_stack *stack_a, t_stack *stack_b)
{
	return (0);
}

void	push(t_stack *stack_a, t_stack *stack_b, char c)
{
	ft_push(stack_a, stack_a);
	if(c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}