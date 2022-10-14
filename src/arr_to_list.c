/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:53 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/14 15:21:55 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_list(t_list **list, int len)
{
	t_list *node;
	t_list *max;
	int i;
	
	i = 0;
	node = (*list)->next;
	max = *list;
	while(i < len)
	{
		while(node != NULL) 
		{
			if(max->data > node->data && node->index == -1)
				max = node;
			node = node->next;
		}
		max->index = i;
		max =*list;
		node = *list;
		i++;
		while(i < len && max->index != -1)
			max = max->next;
		
	}

  
}


int arr_to_list(int *a, int len)
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
     stack_a->index = -1;
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





index_list(&stack_a, len);
sort(&stack_a, &stack_b, len);

while ((stack_b) != NULL) {
    printf("stack_b=>%d\n", (stack_b)->data);
  (stack_b) = (stack_b)->next;
  }

  while ((stack_a) != NULL) {
    printf("stack_a=>%d\n", (stack_a)->data);
     // printf("stack_a====>index=>%d\n", (stack_a)->index);
   (stack_a) = (stack_a)->next;
  }

return (0);
}





