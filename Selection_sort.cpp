#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,MIN,l,k,t,LOC;
	puts("Enter the length of the array");
	scanf("%d",&l);
	int a[l];
	puts("Enter the elements of the array");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l-1;i++)
	{
		MIN=a[i];
		LOC=i;
		for(j=i+1;j<l;j++)
    {
		if(MIN>a[j])
		{
			MIN=a[j];
			LOC=j;
		}
	}
	t=a[i];
	a[i]=a[LOC];
	a[LOC]=t;
		
	}
	puts("\nThe sorted array is\n");
	for(i=0;i<l;i++)
	printf("%d   ",a[i]);
	getch();
}
