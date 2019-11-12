#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL;
void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(top==NULL)
{
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
}
void pop()
{
if(top==NULL)
{
printf("Stack is underflow\n");
}
else
{
printf("Deleted element is %d\n",top->data);
top=top->next;
}
}
void display()
{
struct node *temp;
if(top==NULL)
{
printf("Stack is empty\n");
}
else
{
temp=top;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
}
void main()
{
int choice;
while(1)
{
printf("---------------Stack-----------------\n");
printf("1.push\n2.pop\n3.display\n4.Exit\n");
printf("-------------------------------------\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: push();
	break;
case 2: pop();
	break;
case 3: display();
	break;
case 4: exit(0);
}
}
}
 

