#include "../includes/push_swap.h"

 void print_quantity(void);
int	main(int a_nb, char *str[])
{ 
	char *result = NULL;
	if (a_nb >= 2)
	{
	
		result = ft_join_str(str);
		checker(result);
    	char **map = NULL;    
		map = ft_split(result,  ' ');	
		int len  = matrix_length(map);
		int * a =NULL;
 		a = char_to_int(len, map);
		check_duplicate(a, len);
		
		if(is_sorted(a,len)){
			return 0;
		}		
		arr_to_list(a, len);
//sleep(100);
	
	} 
 	exit (0);
}
