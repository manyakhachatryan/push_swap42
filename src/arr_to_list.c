/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:53 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/20 23:16:02 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_list(t_list **list, int len)
{
	t_list *node;
	t_list *min;
	int i;
	
	i = 0;
	node = (*list)->next;
	min = *list;
	while(i < len)
	{
		while(node != NULL) 
		{
			if(min->data > node->data && node->index == -1)
				min = node;
			node = node->next;
		}
		min->index = i;
		min =*list;
		node = *list;
		i++;
		while(i < len && min->index != -1)
			min = min->next;
		
	}

  
}


void free_list(t_list **stack_a){
  t_list *next;
	//  print_quantity();
	while ((*stack_a) != NULL)
   {
       next = (*stack_a)->next;
       free(*stack_a);
       (*stack_a) = next;
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


  stack_a = node->head;

  while(i < len)
  {   
     stack_a->data = a[i];
     stack_a->index = -1;
      if(i+1 !=len)
      stack_a->next =  malloc(sizeof(t_list));
      else
      {
     
        break;
      }
      stack_a = stack_a->next;
      stack_a->next = NULL;
  i++; 
 }

 stack_a = node->head;





index_list(&stack_a, len);
sort(&stack_a, &stack_b, len);

// while ((stack_b) != NULL) {
//     printf("stack_b=>%d\n", (stack_b)->index);
//   (stack_b) = (stack_b)->next;
//   }

  // while ((stack_a) != NULL) {
  //   //printf("stack_a=>%d\n", (stack_a)->data);
  //   printf("stack_a=====>%d data = %d\n", (stack_a)->index, (stack_a)->data);
  //  (stack_a) = (stack_a)->next;
  // }


  free_list(&stack_a);
 
free(node);
 
return (0);
}





