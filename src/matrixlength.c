#include "../includes/push_swap.h"
int matrix_length(char **map){
int  i = 0;
while(map[i]){
    i++;
}
//printf("%d", i);
return i;
}