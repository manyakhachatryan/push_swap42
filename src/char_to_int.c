#include "../includes/push_swap.h"

int   *char_to_int(int len, char **map)
{


int i =0;
int j;
int	*arr;
arr = malloc(sizeof(int) * len + 1);


while(map[i]){

 j  = 0;
 while(map[i][j]!='\0'){
   j++;
 }
 if(j>16){
   printf("4\n");
   write(2, "ERROR\n", 6);

   exit(0);
 }

    arr[i] = ft_atoi(map[i]);
 
        i++;
}
arr[i] = '\0';


  return (arr);
}