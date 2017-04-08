#include<stdio.h>
#include<conio.h>
int main()
{
	int l,i,j,t;
	printf("Enter the length of the array\n");
	scanf("%d",&l);
	int a[l];
	printf("Enter the elements of the array\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-i;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		    }
		}
	}
	puts("Sorted array is\n");
	for(i=0;i<l;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
