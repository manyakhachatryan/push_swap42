/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:55:48 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 15:56:34 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	main(int a_nb, char *str[])
{
	char	*result;
	char	**map;
	int		len;
	int		*a;

	a = NULL;
	map = NULL;
	result = NULL;
	if (a_nb >= 2)
	{
		result = ft_join_str(str);
		checker(result);
		map = ft_split(result, ' ');
		len = matrix_length(map);
		a = char_to_int(len, map);
		check_duplicate(a, len);
		arr_to_list(a, len);
	}
	return (0);
}
