/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:17:48 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 15:23:04 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ra_rb(t_list **list)
{
	t_list	*adress;
	t_list	*node;

	adress = NULL;
	node = NULL;
	if ((*list) == NULL)
		return ;
	if ((*list)->next != NULL)
	{
		adress = *list;
		(*list) = (*list)->next;
		node = *list;
		if (adress)
		{
			while (node->next != NULL)
			{
				node = node->next;
			}
			node->next = adress;
			node->next->next = NULL;
		}
	}
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra_rb(list_a);
	ra_rb(list_b);
}

void	rra_rrb(t_list **list)
{
	t_list	*adress;
	t_list	*temp;
	t_list	*temp2;

	if ((*list) == NULL)
		return ;
	if (*list != NULL)
	{
		adress = *list;
		temp = *list;
		while (adress->next != NULL)
		{
			temp2 = adress;
			adress = adress->next;
		}
		temp2->next = NULL;
		adress->next = temp;
		*list = adress;
	}
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra_rrb(list_a);
	rra_rrb(list_b);
}
