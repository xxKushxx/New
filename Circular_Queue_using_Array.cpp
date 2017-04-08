#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int l;
int *a;
void enqueue(int x)
{
	if ((rear+1)%l==front)
	{
		printf("The queue is full\n");
		return;
	}
	if ((front==-1)&&(rear==-1))
	{
	    front=0;
	    rear=0;
	}
	else
		rear=(rear+1)%l;
	    a[rear]=x;
}
void dequeue()
{
	if((front==-1)&&(rear==-1))
	{
		printf("Underflow\n");
	}
	else if(front==rear)
	{
		printf("The deleted element is:  %d",a[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("The deleted element is:  %d",a[front]);
		front=(front+1)%l;
		a[front-1]=0;
	}
}
int main()
{
	int i;
	printf("Enter the length of the array:   ");
	scanf("%d",&l);
	a=(int *)malloc(sizeof(int));
	int temp=1,choice,x;
	printf("Enter '1' for INSERTION '2' for DELETION '0' for FINISH:   ");
	while(1)
    {
    	printf("\nEnter choice:   ");
    	scanf("%d",&choice);
    	if(choice==0||choice==1||choice==2)
    	{
			if(choice==1)
			{
				printf("Enter Number for insertion:  ");
				scanf("%d",&x);
				enqueue(x);
			}		
			if(choice==2)
			{
				dequeue();
			}
			if(choice==0)
			{
				break;
			}
		}
		else
		{
			printf("\nEnter a valid choice!!!\n");
		}
	}
		for(i=front;i<=rear;i++)
		{
			printf("%d  ",a[i]);
		}
	getch();
}
