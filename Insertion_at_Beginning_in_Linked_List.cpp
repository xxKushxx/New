#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node* head;
void insert(int val)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->link=head;
	head=temp;
}
void print()
{
	struct node * a=head;
	while(a!=NULL)
	{
		printf("%d   ",a->data);
		a=a->link;
	}
}
int main()
{
	int ch,n;
	printf("Enter choice: '1' for INSERTION '0' for END_PROGRAM");
	while(1)
		{
			printf("\nEnter CHOICE:   ");
			scanf("%d",&ch);
			if(ch==1||ch==0)
			{
				if(ch==1)
				{
					printf("Enter element:  ");
					scanf("%d",&n);
					insert(n);
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
