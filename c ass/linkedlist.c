#include <stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node*next;
}nin;
nin *head,*first,*second,*op;
void  display();

int main(void) {
	
	head=(nin*) malloc(sizeof(nin));
	first=(nin*) malloc(sizeof(nin));
	second=(nin*) malloc(sizeof(nin));
	head->data=10;
	head->next=first;
	first->data=20;
	first->next=second;
	second->data=30;
	second->next=NULL;
	display();
	
}
	void display()
	{
		
		op=head;
		while(op!=NULL)
		{
			printf("%d\n",op->data);
			op=op->next;
		}
	}
	
