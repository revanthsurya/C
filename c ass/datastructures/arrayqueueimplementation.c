#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void enqueue();
void dequeue();
void display();
int arr[MAX];
int front = -1;
int rear = -1;

int main() {
int ch;
printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n ");
printf("Enter the operation to be performed - ");
scanf("%d",&ch);
switch(ch)
{
  case 1 : enqueue();
  break;
  case 2 : dequeue();
  break;
  case 3 : display();
  break;
  case 4 : exit(0);
}
};

void enqueue()
{
  int data;
  if(front==-1)
  {
    front=0;
    printf("add the new element- ");
    scanf("%d",&data);
    rear+=1;
    arr[rear]=data;
  }
  else
  {
    printf("overflow");
  }
};

void dequeue()
{
  if(front!=-1)
  {
    front+=1;
  }
  else
  {
    printf("underflow");
  }
  
};

void display()
{
  int i;
  if(front!=-1)
  {
    for(i=front;i<rear;i++)
    {
    printf("the elements are - %d ",arr[i]);
    }
  }
  else
  {
    printf("the queue is empty");
  }
};
  
  
