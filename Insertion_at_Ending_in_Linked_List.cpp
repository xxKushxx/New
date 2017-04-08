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
	struct node*a;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;	
		return;	
	}
	else if(head->link==NULL)
	{
		head->link=temp;
		return;
	}
	else
	{
		for(a=head;a->link!=NULL;a=a->link);
		{
			a->link=temp;
		}
	}

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
	head=NULL;
	int ch,n,pos;
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
