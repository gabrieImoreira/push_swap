/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:37:31 by gantonio          #+#    #+#             */
/*   Updated: 2021/10/18 21:19:00 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void swap(char **c)
{
    char *tmp;

    tmp = c[0];
    c[0] = c[1];
    c[1] = tmp;    
}

void push(char **c, char **d, int argc)
{
   char *tmp;
   int i;

   i = 0;
   if (d[0] == "x")
   {
       d[0] = c[0];
   }
   else
   {
       
       while (d[i] != "x")
       {
           tmp = d[i];
           d[i] = c[i];
       }
   }
   while (i < argc)
   {
       if (i == argc)
       {
           c[i] = "x";
       }
       c[i] = c[i + 1];
   }
}

int main(int argc, char *argv[])
{
    char **c;
    char **d;
    int i;

    if (argc < 2)
        return (0);
    i = 0;
    c = calloc(argc - 1, 100);
    d = calloc(argc - 1, 100);
    
    while (i < argc)
    {
        c[i] = argv[i + 1];
        d[i] = "x";
        i++;
    }
    i = 0;
    printf("c: ");
    while (i < argc - 1)
        printf("%s ", c[i++]);
    swap(c);
    i = 0;
    printf("\nc: ");
    while (i < argc - 1)
        printf("%s ", c[i++]);   
}