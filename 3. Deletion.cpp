#include<stdio.h>
#include<conio.h>
int main()
{
	int i,lb,j,k,ub,l,m=0,n,index;
	printf("Enter the length of the array\n");
	scanf("%d",&l);
	int a[l];
	printf("Enter the elements of the array\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Number for Deletion\n");
	scanf("%d",&n);
	
	for(i=0;i<l+1;i++)
	{
		if(a[i]==n)
		{
			break;
		}
	}
	if(i>l)
	{
		printf("The element is not present in the array");
	}
	else
	{
	    for(j=i;j<l;j++)
		{
			a[j]=a[j+1];
		}
		for(k=0;k<l-1;k++)
		{
			printf("%d  ",a[k]);
		}
	}
	getch();
}
