#include "../includes/push_swap.h"

int ipa= 0; ;
int ipb= 0;;
int irra= 0;;
int irrb= 0;;
int irb= 0;;
int ira= 0;;


int cat_list_beg(t_list  **list) {
t_list  *adress;

adress = *list;


int num;
num = adress->data;

*list = adress->next;
free(adress);
return num;


}

void  sa(t_list **list){   //ok
int index;
int num;
if((*list)->next!=NULL){
num = (*list)->data;
index = (*list)->index;
(*list)->data = (*list)->next->data;
(*list)->index = (*list)->next->index;
(*list)->next->data = num;
(*list)->next->index= index;
// write(1, "sa\n", 3);
printf("sa\n");
}
}


void  sb(t_list **list){
int index;
int num;
if((*list)->next!=NULL){

num = (*list)->data;
index = (*list)->index;
(*list)->data = (*list)->next->data;
(*list)->index = (*list)->next->index;
(*list)->next->data = num;
(*list)->next->index = index;
// write(1, "sb\n", 3);
printf("sb\n");
}
}

void  ss(t_list **a_list, t_list **b_list){
int a_num;
int b_num;
a_num = (*a_list)->data;
(*a_list)->data = (*a_list)->next->data;
(*a_list)->next->data = a_num;
b_num = (*b_list)->data;
(*b_list)->data = (*b_list)->next->data;
(*b_list)->next->data = b_num;

// write(1, "ss\n", 3);
printf("ss\n");
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
		// write(1, "pa\n", 3);
printf("pa\n");
	}
	ipa++;
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
	// write(1, "pb\n", 3);
printf("pb\n");
}
ipb++;
}



void ra_rb(t_list **list, int i){
t_list  *adress;
adress = *list;
int num;
if(*list!= NULL && (*list)->next!=NULL)
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
//   write(1, "ra\n", 3);
printf("ra\n");
  ira++;
  }
  else  if (i == 2){
	// write(1, "rb\n", 3);
printf("rb\n");
	irb++;
  }
  }
}

void rr(t_list **list_a, t_list **list_b)
{
  ra_rb(list_a, 3);
  ra_rb(list_b, 3);
//    write(1, "rr\n", 3);
printf("rr\n");

   //irr++;
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
//    write(1, "rra\n", 4);
printf("rra\n");
   irra++;
 }
 else  if (i == 2){
	// write(1, "rrb\n", 4);
printf("rrb\n");
	irrb++;
  }
}
}


void rrr(t_list **list_a, t_list **list_b)
{
  rra_rrb(list_a, 3);
  rra_rrb(list_b, 3);
//   write(1, "rrr\n", 4);
printf("rrr\n");


}

void print_quantity(void)
{
	printf("ra = %d\n", ira);
	printf("rb = %d\n", irb);
	printf("rra = %d\n",irra);
	printf("rrb = %d\n",irrb);
	printf("pa = %d\n", ipa);
	printf("pb = %d\n", ipb);
}


