/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:45:40 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/14 16:17:36 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int max_list(t_list **list){
	
	int max;
	int i;
	i = 0;
	int max_index;
	max_index = 0;
	t_list *node;
	node = *list;
max = node->index;
node = node->next;
	while(node!=NULL){
	if(node->index > max){
		max = node->index;
		i++; 
		max_index = i;
		node = node->next;
	} else {
		node = node->next;
		i++;
	}
	}
	printf("max_index%d\n", max_index);
	return max_index;
}



void	sort_3(t_list **stack_a)
{
	
	if (((*stack_a)->index > ((*stack_a)->next->index))
		&& (((*stack_a)->index) < (*stack_a)->next->next->index))
		sa(stack_a);
	else if ((((*stack_a)->index) > ((*stack_a)->next->index))
		&& (((*stack_a)->next->index) > ((*stack_a)->next->next->index)))
	{
		sa(stack_a);
		rra_rrb(stack_a, 1);
	}
	else if ((((*stack_a)->index) > ((*stack_a)->next->index))
		&& (((*stack_a)->next->index) < ((*stack_a)->next->next->index)))
		ra_rb(stack_a, 1);
	else if ((((*stack_a)->index) < ((*stack_a)->next->index))
		&& (((*stack_a)->next->index) > ((*stack_a)->next->next->index))
		&& ((*stack_a)->index < (*stack_a)->next->next->index))
	{
		sa(stack_a);
		ra_rb(stack_a, 1);
	}
	else if ((((*stack_a)->index) < ((*stack_a)->next->index))
		&& (((*stack_a)->next->index) > ((*stack_a)->next->next->index)))
		rra_rrb(stack_a, 1);
	
}
void sort_4(t_list **stack_a, t_list **stack_b,int len){
	(void)len;
	int max_index;
 max_index = max_list(stack_a);
 if(max_index ==0){
pb(stack_a, stack_b);
	  sort_3(stack_a);
	  pa(stack_a, stack_b);
	  ra_rb(stack_a,1);
 }

 else if(max_index ==3){
	 rra_rrb(stack_a,1);
	 pb(stack_a, stack_b);
	  sort_3(stack_a);
	  pa(stack_a, stack_b);
	  ra_rb(stack_a,1);
 }
else if(max_index ==2){
	rra_rrb(stack_a,1);
	rra_rrb(stack_a,1);
	pb(stack_a, stack_b);
	  sort_3(stack_a);
	  pa(stack_a, stack_b);
	  ra_rb(stack_a,1);
	
} else if(max_index ==1){
	ra_rb(stack_a, 1);
	 pb(stack_a, stack_b);
	  sort_3(stack_a);
	  pa(stack_a, stack_b);
	  ra_rb(stack_a,1);
}
 
 //printf("max_index%d\n", max_index);
}

void sort_2(t_list **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
	{
		sa(stack_a);
	}

}
void sort(t_list **stack_a, t_list **stack_b, int len)
{
    (void)stack_b;
	if (len == 2)
	{
		sort_2(stack_a);
		
	}
	else if (len == 3)
	{
		sort_3(stack_a);
		
	}
	else if (len ==4){

		sort_4(stack_a,stack_b, len);
	}
	
}
