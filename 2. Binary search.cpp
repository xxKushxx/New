#include<stdio.h>
#include<conio.h>
int main()
{
	int i,lb,ub,l,m=0,n,index;
	printf("Enter the length of the array\n");
	scanf("%d",&l);
	int a[l];
	printf("Enter the elements of the array\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Number for its Index\n");
	scanf("%d",&n);
	lb=0;
	ub=l-1;
	m=(lb+ub)/2;
	for(i=0;i<l;i++)
	{
		if(a[i]==n)
		{
			index=i;
			break;
		}
		if(a[i]<n)
		{
		lb=m+1;
		m=(lb+ub)/2;
		}
		else if(a[i]>n)
		{
		ub=m-1;
		m=(lb+ub)/2;
	}
	}
	if(index<l)
	{	
	    printf("Index of the number is %d",i+1);
    }
    else
    {
     	printf("The element is not present in the array");
	}
	getch();
}
