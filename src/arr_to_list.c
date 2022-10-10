/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:53 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/10 21:00:15 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void arr_to_list(int *a, int len)
{
  t_parts *node;
  t_list  *stack_a;
  t_list  *stack_b;
  int i;
  
  stack_b = NULL;
  node = NULL;
  
  i = 0;
               
  node = malloc(sizeof(t_parts));
  node->head = malloc(sizeof(t_list));
  node->tail = malloc(sizeof(t_list));
  printf("node===>%p\n", node->head); // es petqa misht mna nuyny

  stack_a = node->head;

  while(i < len)
  {   
     stack_a->data = a[i];

      if(i+1 !=len)
      stack_a->next =  malloc(sizeof(t_list));
      else
      {
        node->tail = stack_a;
        break;
      }
      stack_a = stack_a->next;
      stack_a->next = NULL;
  i++; 
 }

 stack_a = node->head;
// pb(&stack_a, &stack_b);
// pb(&stack_a, &stack_b);
// sa(stack_a);
// sb(stack_b);
//ra_rb(&stack_b, 2);
 //rr(&stack_a, &stack_b);
 rra_rrb(&stack_a, 1);




while (stack_b != NULL) {
    printf("stack_b=>%d\n", stack_b->data);
   stack_b = stack_b->next;
  }

  while (stack_a != NULL) {
    printf("stack_a=>%d\n", stack_a->data);
 stack_a = stack_a->next;
  }




}





