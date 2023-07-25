#include<stdio.h>
void sc(int[],int);
int item;
int main()
{
	int i,n,a[20];
	printf("Enter how many numberss:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter search number:");
	scanf("%d",&item);
	
	
}
void sc(int a1[100],int n1)
{
	int i;
    for(i=0;i<n1;i++)
	   if(a1[i]==item)
	     {
		    printf("%d found in position %d",item,i+1);
		    break;
	     }
	if(i==n1)
    	printf("%d not found !");
}
