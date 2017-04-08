#include<stdio.h>
#include<conio.h>
int main()
{
	int i,l,n,index;
	printf("Enter the length of the array\n");
	scanf("%d",&l);
	int a[l];
	printf("Enter the elements of the array\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the index to enter Element:  ");
	scanf("%d",&index);
	printf("Enter the Element\n");
	scanf("%d",&n);
	
	if(index<l)
	for(i=l+1;i>index-1;i--)
	{
			a[i]=a[i-1];
    }
    a[index-1]=n;
    printf("The new array is:\n");
	for(i=0;i<l+1;i++)
	{
		printf("%d  ",a[i]);
	}
    getch();
}
