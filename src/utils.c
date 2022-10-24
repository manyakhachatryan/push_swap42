/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:10:12 by manykhac          #+#    #+#             */
/*   Updated: 2022/10/24 14:13:45 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str_main, char *str_copy)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = -1;
	j = -1;
	len = ft_strlen(str_main) + ft_strlen(str_copy);
	str = malloc(len + 2);
	if (!str)
		return (0);
	while (str_main[++i])
			str[i] = str_main[i];
	while (str_copy[++j])
		str[i++] = str_copy[j];
		str[i] = ' ';
		str[++i] = '\0';
	if (str_main)
		free(str_main);
	return (str);
}

int	is_sorted(int *arr, int len)
{
	int	i;

	i = 0;
	if (len == 1 || len == 0)
		return (1);
	while (i < len - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
