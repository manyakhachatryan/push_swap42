/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:06:25 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 15:53:58 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

char	*ft_first_join(char *str)
{
	int		len;
	char	*arr;
	int		j;

	j = 0;
	len = ft_strlen(str);
	arr = malloc(len + 1);
	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[len] = ' ';
	arr[len + 1] = '\0';
	return (arr);
}

char	*ft_join_str(char **str)
{
	int		i;
	char	*arr;

	i = 1;
	if (!ft_strlen1(str[i]))
		error();
	if (is_space(&str[i]))
		error();
	arr = ft_first_join(str[i]);
	i++;
	while (str[i])
	{
		if (!ft_strlen1(str[i]))
			error();
		if (is_space(&str[i]))
			error();
		arr = ft_strjoin(arr, str[i]);
		i++;
	}
	return (arr);
}
