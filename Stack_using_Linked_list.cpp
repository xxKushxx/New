#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* top=NULL;
void push(int x)
{
	struct node*a=(struct node*)malloc(sizeof(struct node));
	a->data=x;
	a->link=top;
	top=a;
}
void pop()
{
	struct node*a;
	if(top==NULL)
	{
		puts("underflow");
		return;
	}
	a=top;
	printf("The popped Element is:  %d",a->data);
	top=top->link;
	free(a);
}
void print()
{
	struct node*a=top;
	while(top!=NULL)
	{
		printf("%d  ",a->data);
		a=a->link;
	}
}
int main()
{
	int ch,n;
	printf("Enter choice: '1' for PUSH '2' for POP '0' for END_PROGRAM");
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
					push(n);
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
    	    	printf("\nEnter a valid choice!!!\n");
			}
		}
		printf("The final linked list is:  ");
		print();
	getch();
}
