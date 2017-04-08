#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int *a;
void quicksort(int first,int last)
{
	int pivot,j,i,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<last)
			i++;
			while(a[j]>a[pivot])
			j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(first,j-1);
		quicksort(j+1,last);
	}
}
int main()
{
	int i,l;
	puts("Enter the length of the arrray");
	scanf("%d",&l);
	a=(int*)malloc(sizeof(int));
	printf("Enter the elements in the array\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(0,l-1);
	puts("sorted array is\n");
	for(i=0;i<l;i++)
	{
		printf("%d   ",a[i]);
	}
	getch();
}
