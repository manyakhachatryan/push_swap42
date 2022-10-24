/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_to_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:58:53 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/24 17:57:41 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_list(t_list **list, int len)
{
	t_list	*node;
	t_list	*min;
	int		i;

	i = 0;
	node = (*list)->next;
	min = *list;
	while (i < len)
	{
		while (node != NULL)
		{
			if (min->data > node->data && node->index == -1)
				min = node;
			node = node->next;
		}
		min->index = i;
		min = *list;
		node = *list;
		i++;
		while (i < len && min->index != -1)
			min = min->next;
	}
}

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

	i = 0;
	stack_b = NULL;
	node = malloc(sizeof(t_list));
	stack_a = node;
	while (i < len)
	{
		stack_a->data = a[i];
		stack_a->index = -1;
		if (i + 1 != len)
			stack_a->next = malloc(sizeof(t_list));
		else
			break ;
		stack_a = stack_a->next;
		stack_a->next = NULL;
		i++;
	}
	stack_a = node;
	index_list(&stack_a, len);
	sort(&stack_a, &stack_b, len);
	free_list(&stack_a);
}
