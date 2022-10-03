

#include "../includes/push_swap.h"

int	main(int a_nb, char *str[])
{
	char *result = NULL;
	if (a_nb > 2)
	{
		result = ft_join_str(str);
		checker(result);
    	char **map = NULL;    
		map = ft_split(result,  ' ');
		int len  = matrix_length(map);
		int * a =NULL;
 		a = char_to_int(len, map);
		check_duplicate(a, len);
	}
 	//sleep(100);
 	return (0);
}
