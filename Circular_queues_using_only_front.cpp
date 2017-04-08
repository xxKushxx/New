#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node*front=NULL;
void enqueue(int x)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *a;
	temp->data=x;
	if(front==NULL)
	{
		front=temp;
		temp->link=temp;
	}
	else if(front==front->link)
	{
		front->link=temp;
		temp->link=front;
	}
	else
	{
		for(a=front;a->link!=front;a=a->link);
		{
			a->link=temp;
			temp->link=front;
		}
	}
}
void dequeue()
{
	struct node*a;
	if(front==NULL)
	{
		printf("Underflow\n");
	}
	else if(front==front->link)
	{
		printf("Deleted element:   %d\n",front->data);
		front=NULL;
	}
	else
	{
		for(a=front;a->link!=front;a=a->link);
		{
			a->link=front->link;
			printf("Deleted element id:   %d\n",front->data);
			front=front->link;
		}
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

