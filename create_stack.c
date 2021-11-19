/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:30:07 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/18 22:40:09 by gantonio         ###   ########.fr       */
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

static int	check_args(char *c, t_stack *stack_a)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(c);
	while (i < size)
	{
		if ((!ft_isdigit(c[i]) && c[i] != '-') || (i > 0 && c[i] == '-')
			|| (c[0] == '-' && size == 1))
		{
			free(stack_a->number);
			return (write(STDERR_FILENO, ERR, 7), 0);
		}
		i++;
	}
	return (1);
}

static void	stack_validator(char c, t_stack *stack_a)
{
	int	i;
	int	equal;

	i = 0;
	equal = 0;
	while (i < stack_a->size)
	{
		if (stack_a->number[i] == c)
			equal++;
		i++;
	}
	if (equal > 1)
	{
		free(stack_a->number);
		write(STDERR_FILENO, ERR, 7);
		exit(1);
	}
}

static void	insert_string_args(t_stack *stack_a, t_stack *stack_b, char *argv[])
{
	char	**str;
	int		j;

	j = 0;
	str = ft_split(argv[1], ' ');
	while (j < count_args(str))
	{
		if (!check_args(str[j], stack_a))
			return (free_aux_string(str, i), exit(0), 0);
		if (ft_atoi_ps(str[j]) > MAX_INT
			|| ft_atoi_ps(str[j]) < MIN_INT)
		{
			write(STDERR_FILENO, ERR, 7);
			exit(0);
		}
		stack_a->number[j] = ft_atoi(str[j]);
		stack_a->size++;
		stack_validator(stack_a->number[j], stack_a);
		j++;
	}
	free_split(str, count_args(str));
	stack_b->number = malloc((stack_a->size) * sizeof(int));
}

void	insert_args_to_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 2)
	{
		while (i < argc)
		{
			if (!check_args(argv[i], stack_a))
				exit(0);
			if (ft_atoi_ps(argv[i]) > MAX_INT
				|| ft_atoi_ps(argv[i]) < MIN_INT)
			{
				write(STDERR_FILENO, ERR, 7);
				exit(0);
			}
			stack_a->number[i - 1] = ft_atoi_ps(argv[i]);
			stack_a->size++;
			stack_validator(stack_a->number[i - 1], stack_a);
			i++;
		}
		stack_b->number = malloc((stack_a->size) * sizeof(int));
	}
	else
		insert_string_args(stack_a, stack_b, argv);
}