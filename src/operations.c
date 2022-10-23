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
 write(1, "sa\n", 3);

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
 write(1, "sb\n", 3);

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

write(1, "ss\n", 3);

}








void pa(t_list **a_list, t_list **b_list){
t_list	*push;

	push = NULL;
	if (*b_list)
	{
		push = *b_list;
		(*b_list) = (*b_list)->next;
		push->next = *a_list;
		*a_list = push;
		write(1, "pa\n", 3);
	}
	
}

void pb(t_list **a_list, t_list **b_list){


	t_list	*push;

	push = NULL;
	if (*a_list)
	{
		push = *a_list;
		(*a_list) = (*a_list)->next;
		push->next = *b_list;
		*b_list = push;
		write(1, "pb\n", 3);
	}

}



void ra_rb(t_list **list, int i){
t_list	*adress;
	t_list	*node;

	adress = NULL;
	node = NULL;
	if ((*list)->next != NULL)
	{
		adress = *list;
		(*list) = (*list)->next;
		node = *list;
		if (adress)
		{
			while (node->next != NULL)
			{
				node = node->next;
			}
			node->next = adress;
			node->next->next = NULL;
		}
		if (i == 1)
			write(1, "ra\n", 3);
		else if (i == 2)
			write(1, "rb\n", 3);
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



