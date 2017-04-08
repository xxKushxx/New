#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
int *a;
void push(int x,int l)
{
	if(top==l-1)
	{
		printf("overflow");
		return;
	}
	else
	a[++top]=x;
}
int pop()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		printf("The popped element is:  %d",a[top]);
	    top--;
    }
}
int main()
{
	int i,ch,l,temp=1,x;
	printf("Enter the length of the Queue:    ");
	a=(int*)malloc(sizeof(int));
	scanf("%d",&l);
	printf("Enter '1' for PUSH '2' for POP '3' for FINISH");
	while(1)
	{
		printf("\nEnter CHOICE:   ");
		scanf("%d",&ch);
		if(ch==1||ch==2||ch==0)
		{
			if(ch==1)
			{
				printf("Enter the value for push:   ");
				scanf("%d",&x);
				push(x,l);
			}
			if(ch==2)
			{
				pop();
			}
			if(ch==0)
			{
				break;
			}			
		}
		else
		{
			printf("Enter a valid choice!!!");
		}
	}
getch();
}

