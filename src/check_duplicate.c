#include "../includes/push_swap.h"

void check_duplicate(int *a, int len){
    int i ;
    int j ;

  
    i = 0;
while(i<len){
    j = 0;
while(j<len){
 //   printf("a[i]=>%d\n", j);
    if(i!=j){
        // printf("%d=> ", a[i]);
        if(a[i] == a[j]){
            
            write(2, "ERROR\n", 6);
        printf("2\n");

            exit(0);
        }
     
    }
    j++;
}
 i++;
}

}