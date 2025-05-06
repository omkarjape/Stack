#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL, *newnode;
struct node *temp;
int max = 5, count = 0;
void push()
{
	if(count == max){
		printf("Stack is overflow\n");
	}else{
	newnode = malloc(sizeof(struct node));
	printf("Enter data for push : ");
	scanf("%d",&newnode->data);
	if(top == NULL)
	{
		top = newnode;
		newnode->next = NULL;
	}else
	{
		newnode->next= top;
		top = newnode;
	}
	count++;
	}
}

void pop()
{
	if(top == NULL)
	{
		printf("Stack is underflow\n");
	}else
	{
		temp = top;
		top = top->next;
		printf("%d element is pop out\n",temp->data);
		temp->next = NULL;
		free(temp);
		count--;
	}
}

void display()
{
	if(top==NULL){
		printf("Stack is Empty\n");
	}
	else{
	temp = top;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
	}
}

void main()
{
	printf("Stack using singly link list\n");
	int ch;
	do{
	printf("1.push element\n2.pop element\n3. display stack\n4.Exit\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		push();
	break;
	case 2:
		pop();
	break;
	case 3:
		display();
	break;
	case 4:
		printf("Thank You😊️");
	break;
	default:
		printf("Wrong choice☠️");
	break;
	}
	}while(ch!=4);
}








