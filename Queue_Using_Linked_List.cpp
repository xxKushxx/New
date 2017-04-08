#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x)
{
	struct node * temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=temp;
		return;
	}
	rear->link=temp;
	rear=temp;
}
void dequeue()
{
	struct node *temp=front;
	if(front==NULL)
	{
		printf("Underflow\n");
		return;
	}
	if(front==rear)
	{
		printf("The DELETED element is:  %d",front->data);
		front=rear=NULL;
	}
	else
	{
		printf("The DELETED element is:  %d",front->data);
	    front=front->link;
	}
	free(temp);
}
void print()
{
	struct node * a=front;
	while(a!=NULL)
	{
		printf("%d   ",a->data);
		a=a->link;
	}
}
int main()
{
	int ch,n;
	printf("Enter choice: '1' for INSERTION '2' for DELETION '0' for END_PROGRAM");
	while(1)
		{
			printf("\nEnter CHOICE:   ");
			scanf("%d",&ch);
			if(ch==0||ch==1||ch==2)
			{
				if(ch==1)
				{
					printf("Enter element:  ");
					scanf("%d",&n);
					enqueue(n);
				}
				if(ch==2)
				{
					dequeue();
				}
				if(ch==0)
				{
					break;
				}
    	    }
    	    else
    	    {
    	    	printf("\nEnter a valid choice!!!\n");
			}
		}
	getch();
}
