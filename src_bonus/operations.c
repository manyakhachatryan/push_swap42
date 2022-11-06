/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:40:29 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 15:22:51 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	sa(t_list **list)
{
	int	index;
	int	num;

	if ((*list) == NULL)
		return ;
	if ((*list)->next != NULL)
	{
		num = (*list)->data;
		index = (*list)->index;
		(*list)->data = (*list)->next->data;
		(*list)->index = (*list)->next->index;
		(*list)->next->data = num;
		(*list)->next->index = index;
	}
}

void	sb(t_list **list)
{
	int	index;
	int	num;

	if ((*list) == NULL)
		return ;
	if ((*list)->next != NULL)
	{
		num = (*list)->data;
		index = (*list)->index;
		(*list)->data = (*list)->next->data;
		(*list)->index = (*list)->next->index;
		(*list)->next->data = num;
		(*list)->next->index = index;
	}
}

void	ss(t_list **a_list, t_list **b_list)
{
	int	a_num;
	int	b_num;

	if ((*a_list) == NULL || (*b_list) == NULL)
		return ;
	a_num = (*a_list)->data;
	(*a_list)->data = (*a_list)->next->data;
	(*a_list)->next->data = a_num;
	b_num = (*b_list)->data;
	(*b_list)->data = (*b_list)->next->data;
	(*b_list)->next->data = b_num;
}

void	pa(t_list **a_list, t_list **b_list)
{
	t_list	*push;

	push = NULL;
	if ((*b_list) == NULL)
		return ;
	if (*b_list)
	{
		push = *b_list;
		(*b_list) = (*b_list)->next;
		push->next = *a_list;
		*a_list = push;
	}
}

void	pb(t_list **a_list, t_list **b_list)
{
	t_list	*push;

	push = NULL;
	if ((*a_list) == NULL)
		return ;
	if (*a_list)
	{
		push = *a_list;
		(*a_list) = (*a_list)->next;
		push->next = *b_list;
		*b_list = push;
	}
}
