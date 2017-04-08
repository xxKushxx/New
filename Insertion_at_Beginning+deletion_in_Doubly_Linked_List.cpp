#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* head;                                                              
struct node* GetNewNode(int x)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	return temp;		
}
void InsertAtHead(int x)
{
	struct node * temp= GetNewNode(x);
	if(head==NULL)
	{
		head=temp;
		return;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void deletion()
{
	struct node* temp=head;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else if(temp->next==NULL)
	{
		printf("The deleted element is:  %d",temp->data);
		head=NULL;
	}
	else
	{
		printf("\nThe DELETED element is:  %d\n",head->data);
    	head->next->prev=NULL;
 	    head=head->next;
    }
}
void ForwardPrint()
{
	printf("\nThe forward list is:  ");
	struct node* a=head;
	while(a!=NULL)
	{
		printf("%d  ",a->data);
		a=a->next;
	}
	printf("\n");

}
void ReversePrint()
{
	printf("Reverse list is:  ");
	struct node*b=head;
	if(b==NULL)
	{
		return;
	}
	while(b->next!=NULL)
	{
		b=b->next;
	}
	while(b!=NULL)
	{
		printf("%d  ",b->data);
		b=b->prev;
	}
}
int main()
{
	head=NULL;
	int ch,n,pos;
	printf("Enter choice: '1' for INSERTION '2' for DELETION '3' for PRINT_LIST_IN_FORWARD '4' for PRINT_LIST_IN_REVERSE '0' for END_PROGRAM");
	while(1)
		{
			printf("\nEnter CHOICE:   ");
			scanf("%d",&ch);
			if(ch==1||ch==2||ch==3||ch==4||ch==0)
			{
				if(ch==1)
				{
					printf("Enter element:  ");
					scanf("%d",&n);
					InsertAtHead(n);
				}
				if(ch==2)
				{
					deletion();
				}
				if(ch==3)
				{
					ForwardPrint();
				}
				if(ch==4)
				{
					ReversePrint();
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
