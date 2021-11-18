/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:30:07 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/17 21:53:20 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_stack *stack_a, t_stack *stack_b, int argc, char *argv[])
{
	int		i;
	int		c;
	char	**str;
	
	i = 0;
	i = 0;
	if (argc != 2)
		stack_a->number = malloc((argc - 1) * sizeof(int));
	else
	{
		str = ft_split(argv[1], ' ');
		i = count_args(str);
		stack_a->number = malloc(i * sizeof(int));
		free_split(str, i);
	}
	stack_a->size = 0;
	stack_b->size = 0;
}
