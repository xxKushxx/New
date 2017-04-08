#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,l,index=-1;
	puts("Enter the length of the array");
	scanf("%d",&l);
	int a[l];
	printf("Enter the elements of the array\n");
	for(i=0;i<l;i++)                                                                       
	{
		scanf("%d",&a[i]);
	}
	puts("Enter number for its index");
	scanf("%d",&n);
	for(i=0;i<l;i++)
	{
		if(a[i]==n)
		{
			index=i+1;
			break;
		}

	}
	if(index>-1)
	{
	printf("The index of the number is %d",index);
	}
	if(index==-1)
	{
		printf("There is no such numbers exist");
	}	
	getch();
}
