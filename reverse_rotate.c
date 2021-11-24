/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:46:32 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/23 23:57:07 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack, char c)
{
	ft_reverse_rotate(stack);
	if (c == 'a')
		write(1, "rra\n", 3);
	else if (c == 'b')
		write(1, "rrb\n", 3);
}