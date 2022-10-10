#include "../includes/push_swap.h"

int cat_list_beg(t_list  **list) {
t_list  *adress;

adress = *list;


int num;
num = adress->data;

*list = adress->next;
free(adress);
return num;


}

void  sa(t_list *list){   //ok

int num;
if(list->next!=NULL){
num = list->data;
list->data = list->next->data;
list->next->data = num;
write(1, "sa\n", 3);
}
}


void  sb(t_list *list){

int num;
if(list->next!=NULL){

num = list->data;
list->data = list->next->data;
list->next->data = num;
write(1, "sb\n", 3);
}
}

void  ss(t_list *a_list, t_list *b_list){
int a_num;
int b_num;
a_num = a_list->data;
a_list->data = a_list->next->data;
a_list->next->data = a_num;
b_num = b_list->data;
b_list->data = b_list->next->data;
b_list->next->data = b_num;

write(1, "ss\n", 3);
}








void pa(t_list **a_list, t_list **b_list){

t_list *push = NULL;

if(*b_list!=NULL){

int num = cat_list_beg(b_list);
    push = malloc(sizeof(t_list));
    push->data = num;
    push->next = NULL;
    push->next = *a_list;
    *a_list = push;
    write(1, "pa\n", 3);
}
}

void pb(t_list **a_list, t_list **b_list){

t_list *push = NULL;

if(*a_list!=NULL){

int num = cat_list_beg(a_list);
    push = malloc(sizeof(t_list));
    push->data = num;
    push->next = NULL;
    push->next = *b_list;
    *b_list = push;
    write(1, "pb\n", 3);
}
}



void ra_rb(t_list **list, int i){
t_list  *adress;
adress = *list;
int num;
if(*list!= NULL)
{
num =  cat_list_beg(list);
while(adress->next!=NULL)
{
adress = adress->next;
}
  adress->next = malloc(sizeof(t_list));
  adress->next->data = num;
  adress->next->next = NULL;
 if(i ==1)
  {
  write(1, "ra\n", 3);
  }
  else  if (i == 2){
    write(1, "rb\n", 3);
  }
  }
}

void rr(t_list **list_a, t_list **list_b)
{
  ra_rb(list_a, 3);
  ra_rb(list_b, 3);
   write(1, "rr\n", 3);
}

void rra_rrb(t_list **list, int i)
{
t_list *adress;
t_list *temp;
t_list *temp2;

if(*list!= NULL) {
adress = *list;
temp =*list;
while(adress->next!=NULL)
{
  temp2 = adress;
  adress= adress->next;
}

 temp2->next= NULL;
 adress->next = temp;
  *list = adress;
 if(i ==1 )
 {
   write(1, "rra\n", 4);
 }
 else  if (i == 2){
    write(1, "rrb\n", 4);
  }
}
}


void rrr(t_list **list_a, t_list **list_b)
{
  rra_rrb(list_a, 3);
  rra_rrb(list_b, 3);
  write(1, "rrr\n", 4);

}


