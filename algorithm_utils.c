/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:46:45 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/17 21:54:34 by gantonio         ###   ########.fr       */
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