
#include "../includes/push_swap.h"
 
void checker(char *str){

int i;
i  = 0 ; 

if((str[i]>='0' && str[i]<='9') || str[i]==' ' ||  str[i] == '+' || str[i] == '-'){
    i++;
}
while(str[i]){

    if((str[i]>='0' && str[i]<='9') || str[i]==' ')
    {
     
        i++; 
    }
    else if((str[i] == '+' || str[i] == '-')
        && (str[i + 1] >= '0' && str[i + 1] <= '9') && 
          str[i-1] == ' ' )
       i++;
    else {
        printf("sxallll\n");
        exit(1);
    }
}

}