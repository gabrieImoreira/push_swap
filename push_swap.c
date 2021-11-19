/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:04:47 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/17 22:10:14 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2)
		exit (0);
	create_stack(&stack_a, &stack_b, argc, argv);
	insert_args_to_stack(&stack_a, &stack_b, argc, argv);
	write(1, "ok\n", 3);
}
