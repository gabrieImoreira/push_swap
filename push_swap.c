/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:37:31 by gantonio          #+#    #+#             */
/*   Updated: 2021/11/17 21:31:52 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    t_stack	stack_a;
    t_stack stack_b;
    char **a;
    char **b;
    int i;
    
    if (argc < 2)
        exit (0);
    create_stacks(&stack_a, &stack_b, argc, argv);
    
    // if (!(stack = malloc(sizeof(t_stack))))
	// 	return (0);
    // stack->size_a = 1;
    // printf("teste %d\n\n", stack->size_a);
    // i = 0;
    // a = calloc(argc - 1, 100);
    // b = calloc(argc - 1, 100);
    // while (i < argc)
    // {
    //     a[i] = argv[i + 1];
    //     i++;
    // }
    // i = 0;
    // printf("original: ");
    // while (i < argc - 1)
    //     printf("%s ", a[i++]);
    // swap(a);
    // i = 0;
    // printf("\n w/ swap: ");
    // while (i < argc - 1)
    //     printf("%s ", a[i++]);
    // printf("\n\n-----push------\n");
    // printf("original: ");
    // i = 0;
    // while (i < argc - 1)
    //     printf("%s ", a[i++]);
    // printf("\n");
    // push(a, b, 3);
    // i = 0;
    // while (i < argc - 1)
    //     printf("%s ", a[i++]);
    // i = 0;
    // while (i < argc - 1)
    //     printf("%s ", b[i++]);
    // printf("\n-----------\n");
}