#include<iostream>
using namespace std;
int linear(int n,int a[],int item,int index)
{
	if(index>=n)
	return -1;
	if(index==item)
	return index;
	return linear(n,a,item,index);
}
int main()
{
	int a[100],n,item,index=0;
	cout<<("Enter the size:\n");
	cin>>n;
	cout<<("Enter the elements:\n");
	for(index=0;index<n;index++)
	cin>>a[index];
	cout<<("Enter the item:\n");
	cin>>item;
	int result=linear(n,0,item,0);
	if(result<0)
	cout<<item<<"Not found";
	else
	cout<<item<<"found at index:"<<result;
}
