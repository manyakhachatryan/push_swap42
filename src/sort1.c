/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:46:49 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/24 18:21:01 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_a(t_list **stack_a, t_list **stack_b, int len)
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

int	max_list(t_list **list)
{
	int		max;
	int		i;
	int		max_index;
	t_list	*node;

	i = 0;
	max_index = 0;
	node = *list;
	max = node->index;
	node = node->next;
	while (node != NULL)
	{
		if (node->index > max)
		{
			max = node->index;
			max_index = ++i;
			node = node->next;
		}
		else
		{
			node = node->next;
			i++;
		}
	}
	return (max_index);
}

void	sort(t_list **stack_a, t_list **stack_b, int len)
{
	if (len == 2)
		sort_2(stack_a);
	else if (len == 3)
		sort_3(stack_a);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
	else if (len >= 6 && len <= 100)
	{
		sort_6(stack_a, stack_b, 15);
		fill_a(stack_a, stack_b, len);
	}
	else if (len >= 101 && len <= 500)
	{
		sort_6(stack_a, stack_b, 30);
		fill_a(stack_a, stack_b, len);
	}
	else if (len >= 501)
	{
		sort_6(stack_a, stack_b, 45);
		fill_a(stack_a, stack_b, len);
	}
}
