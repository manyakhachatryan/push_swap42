/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:17:48 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/24 18:06:33 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra_rb(t_list **list, int i)
{
	t_list	*adress;
	t_list	*node;

	adress = NULL;
	node = NULL;
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
		if (i == 1)
			write(1, "ra\n", 3);
		else if (i == 2)
			write(1, "rb\n", 3);
	}
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra_rb(list_a, 3);
	ra_rb(list_b, 3);
	write(1, "rr\n", 3);
}

void	rra_rrb(t_list **list, int i)
{
	t_list	*adress;
	t_list	*temp;
	t_list	*temp2;

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
		if (i == 1)
		{
			write(1, "rra\n", 4);
		}
		else if (i == 2)
		{
			write(1, "rrb\n", 4);
		}
	}
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra_rrb(list_a, 3);
	rra_rrb(list_b, 3);
	write(1, "rrr\n", 4);
}
