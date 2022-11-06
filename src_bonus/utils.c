/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:10:12 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 15:43:37 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

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

int	is_space(char **str)
{
	int	j;

	j = 0;
	while (str[0][j])
		if (str[0][j++] != ' ')
			return (0);
	return (1);
}
