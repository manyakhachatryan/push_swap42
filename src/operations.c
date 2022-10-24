/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:40:29 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/24 15:17:42 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list **list)
{
	int	index;
	int	num;

	if ((*list)->next != NULL)
	{
		num = (*list)->data;
		index = (*list)->index;
		(*list)->data = (*list)->next->data;
		(*list)->index = (*list)->next->index;
		(*list)->next->data = num;
		(*list)->next->index = index;
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **list)
{
	int	index;
	int	num;

	if ((*list)->next != NULL)
	{
		num = (*list)->data;
		index = (*list)->index;
		(*list)->data = (*list)->next->data;
		(*list)->index = (*list)->next->index;
		(*list)->next->data = num;
		(*list)->next->index = index;
		write(1, "sb\n", 3);
	}
}

void	ss(t_list **a_list, t_list **b_list)
{
	int	a_num;
	int	b_num;

	a_num = (*a_list)->data;
	(*a_list)->data = (*a_list)->next->data;
	(*a_list)->next->data = a_num;
	b_num = (*b_list)->data;
	(*b_list)->data = (*b_list)->next->data;
	(*b_list)->next->data = b_num;
	write(1, "ss\n", 3);
}

void	pa(t_list **a_list, t_list **b_list)
{
	t_list	*push;

	push = NULL;
	if (*b_list)
	{
		push = *b_list;
		(*b_list) = (*b_list)->next;
		push->next = *a_list;
		*a_list = push;
		write(1, "pa\n", 3);
	}
}

void	pb(t_list **a_list, t_list **b_list)
{
	t_list	*push;

	push = NULL;
	if (*a_list)
	{
		push = *a_list;
		(*a_list) = (*a_list)->next;
		push->next = *b_list;
		*b_list = push;
		write(1, "pb\n", 3);
	}
}
