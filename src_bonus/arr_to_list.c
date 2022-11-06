/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:53 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 15:55:48 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h" 

void	free_list(t_list **stack_a)
{
	t_list	*next;

	while ((*stack_a) != NULL)
	{
		next = (*stack_a)->next;
		free(*stack_a);
		(*stack_a) = next;
	}
}

void	arr_to_list(int *a, int len)
{
	t_list	*node;
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = -1;
	stack_b = NULL;
	node = malloc(sizeof(t_list));
	stack_a = node;
	while (++i < len)
	{	
		stack_a->data = a[i];
		if (i + 1 == len)
		{
			stack_a->next = NULL;
			break ;
		}
		stack_a->next = malloc(sizeof(t_list));
		stack_a = stack_a->next;
		stack_a->next = NULL;
	}
	stack_a = node;
	read_data(&stack_a, &stack_b);
	free_list(&stack_a);
}
