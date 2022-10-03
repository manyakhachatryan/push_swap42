#include "../includes/push_swap.h"

int   *char_to_int(int len, char **map)
{


int i =0;

int	*arr;
arr = malloc(sizeof(int) * len + 1);


while(map[i]){

    arr[i] = ft_atoi(map[i]);
   // printf("arr[i]=>%d\n", ft_atoi(map[i]));
        i++;
}
arr[i] = '\0';
//  printf("%d\n", len); 
  return (arr);
}