#include<stdio.h>
#include<conio.h>
int lin(int);
int main()
{
	int n,k,p;
	printf("Enter the value:");
	scanf("%d",&n);
	k=lin(n);
	printf("the result=%d",k);
	getch();
	return 0;
}
int lin(int p)
{
	int i,f=1;
	for(i=1;i<=p;i++)
	{
		f=f*i;
	}
	return(f);
}

