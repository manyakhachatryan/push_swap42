/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:51:27 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 12:08:46 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	*char_to_int(int len, char **map)
{
	int	i;
	int	j;
	int	*arr;
	int	count;

	count = 0;
	i = 0;
	arr = malloc(sizeof(int) * len + 1);
	while (map[i])
	{
		j = 0;
		count = 0;
		while (map[i][j] != '\0' && map[i][j] == '0')
			j++;
		while (map[i][j++] != '\0')
			count++;
		if (count > 16)
			error();
		arr[i] = ft_atoi(map[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
