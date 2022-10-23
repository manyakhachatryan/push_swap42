/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:45:40 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/23 20:03:34 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void fill_a(t_list **stack_a,t_list **stack_b, int len)
{

int	max;

	max = 0;
	while (*stack_b)
	{
		max = max_list(stack_b);
		if (max <= len / 2)
		{
			while (max-- >= 1)
				ra_rb(stack_b, 2);
			pa(stack_a, stack_b);
			len--;
		}
		else if (max > len / 2)
		{
			while (len - max)
			{
				rra_rrb(stack_b, 2);
				max++;
			}
			pa(stack_a, stack_b);
			len--;
		}
	}

	}


	// int max;
	// max = 0;
	// while(*stack_b)
	// {
	// 	max= max_list(stack_b);
	// 	if(max <= len/2)
	// 	{
	// 		while(max-->=1)
	// 			ra_rb(stack_b, 2);
	// 			pa(stack_a, stack_b);
	// 		len--;
		
		
	// 	} else if(max >= len/2){
	// 		while(len-max){
	// 			rra_rrb(stack_b,2);
	// 			max++;
	// 		}
	// 	}

	// }


int max_list(t_list **list){
	
	int max;
	int i;
	int max_index;
	t_list *node;
	
	i = 0;
	max_index = 0;
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
//	printf("max_index%d\n", max_index);
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


void sort_5(t_list **stack_a, t_list **stack_b,int len){
	(void)len;
int max_index;
max_index = max_list(stack_a);
if (max_index ==0)
 {
	pb(stack_a, stack_b);
	sort_4(stack_a,stack_b, len);
	pa(stack_a, stack_b);
	ra_rb(stack_a,1);
}
else if(max_index ==4){
	rra_rrb(stack_a,1);
	pb(stack_a, stack_b);
	sort_4(stack_a,stack_b, len);
	pa(stack_a, stack_b);
	ra_rb(stack_a,1);
	 
}  else if(max_index ==3){
	rra_rrb(stack_a,1);
	rra_rrb(stack_a,1);
	pb(stack_a, stack_b);
	sort_4(stack_a,stack_b, len);
	pa(stack_a, stack_b);
	ra_rb(stack_a,1);
	
} else if(max_index ==2){
		ra_rb(stack_a,1);
		ra_rb(stack_a,1);
	
	pb(stack_a, stack_b);
	sort_4(stack_a,stack_b, len);
	pa(stack_a, stack_b);
	ra_rb(stack_a,1);
	
} else if(max_index ==1){
		ra_rb(stack_a,1);
	pb(stack_a, stack_b);
	sort_4(stack_a,stack_b, len);
	pa(stack_a, stack_b);
	ra_rb(stack_a,1);
}

}

void sort_6(t_list **stack_a, t_list **stack_b,int n){
//	(void)len;
	int count;
	count = 0;
	while((*stack_a)!=NULL){
		if((*stack_a)->index <= count)
		{
			
		pb(stack_a, stack_b);
		ra_rb(stack_b,2);
		count++;
			} else if((*stack_a)->index <= count+n) {
			pb(stack_a, stack_b);
			count++;
			} else{
					ra_rb(stack_a,1);
			}
			
	}
	
	
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
    //(void)stack_b;
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
	} else if(len == 5){
		sort_5(stack_a,stack_b, len);
	} else if(len >=6 && len <=100) {
		sort_6(stack_a,stack_b, 15);
	
		fill_a(stack_a,stack_b, len);
		
	}
	else if(len >=101 && len <=500) {
		sort_6(stack_a,stack_b, 30);
		fill_a(stack_a,stack_b, len);
	}
	else if(len >=501 ) {
		sort_6(stack_a,stack_b, 45);
		fill_a(stack_a,stack_b, len);
		
	}
	// free(stack_a);
	// free(stack_b);
	
}
