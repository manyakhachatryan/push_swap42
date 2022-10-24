/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:27:11 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/24 20:06:13 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi( char *str)
{
	int			i;
	int			n;
	long int	result;

	result = 0;
	n = 1;
	i = 0;
	if (!str)
		return (0);
	if (str[i] == '-')
	{
		n = n * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result * n > 2147483647 || result * n < -2147483648)
		error();
	return (result * n);
}
