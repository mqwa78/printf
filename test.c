/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:14:42 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/17 00:02:22 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void nbrs( int first, ... ) 
{
   va_list  arg;
   int   i;
   int   n;

   printf("%d\n", first);
   va_start(arg, first);
   i = 0;
   //printf("%d\n", first);
   while (i < 2)
   {
      n = (int)va_arg(arg, int);
      printf("%d\n", n);
      i++;
   }  
}

int main(void) 
{  
   nbrs(10, 15, 20);
   return (0);
}