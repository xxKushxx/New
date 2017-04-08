#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[20];
int top=-1;
void push(int x)
{
	if(top==20)
	{
		printf("Overflow\n");
	}
	else
	a[++top]=x;
}
char pop()
{
	return (a[top--]);
}
int pr(char elem)
{
	switch(elem)
	{
		case'#':return 0;
		case'(':return 1;
		case'+':
		case'-':return 2;
		case'/':
		case'*':return 3;
	}
}
int main()
{
	char infx[20],pofx[20],ch,x;
	int i=0,k=0;
	printf("\nRead the infix operation:  ");
	scanf("%s",infx);
	push('#');
	while((ch=infx[i++])!='\0')
	{
		if(ch=='(')
		push (ch);
		else if (ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'||ch=='0')
		{
		    pofx[k++]=ch;
	    }
	    else if(ch==')')
	    {
	    	while(a[top]!='(')
	    	pofx[k++]=pop();
         	x=pop();
		}
		else
		{
			while(pr(a[top])>=pr(ch))
			pofx[k++]=pop();
			push(ch);
		}
	}
	while(a[top]!='#')

		pofx[k++]=pop();
		pofx[k]='\0';
	printf("\n\nThe given INFIX Expression: %s  postfix Expression: %s",infx,pofx);
	getch();
}
