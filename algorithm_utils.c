/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:46:45 by gantonio          #+#    #+#             */
/*   Updated: 2022/01/10 20:53:58 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_args(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

void	free_split(char **str, int size)
{
	int	i;

	i = 0;
	while (i <= size)
		free(str[i++]);
	free(str);
}

long long int	ft_atoi_ps(const char *nptr)
{
	int				i;
	long long int	ret;
	int				sign;

	i = 0;
	ret = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{	
		if (nptr[i++] == '-')
			sign *= -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		ret = (ret * 10) + (nptr[i++] - '0');
	return (ret * sign);
}

int	return_lower_pos(t_stack *stack)
{
	int	num;
	int	pos;
	int	i;

	i = 0;
	pos = 0;
	num = stack->number[i];
	while (i < stack->size)
	{
		if (stack->number[i] < num)
		{
			num = stack->number[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	return_higher_pos(t_stack *stack)
{
	int	num;
	int	pos;
	int	i;

	i = 0;
	pos = 0;
	num = stack->number[i];
	while (i < stack->size)
	{
		if (stack->number[i] > num)
		{
			num = stack->number[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}
