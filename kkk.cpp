#include <iostream>
using namespace std;
int n;
int f=0,r=0;
void enqueue(int arr[],int ele)
{
	if(r==n)
	{
		cout<<"Queue overflow"<<endl;
		return;
	}
	arr[r++]=ele;
	return;
}
void dequeue(int arr[])
{
	if(f==r)
	{
		cout<<"Queue Underflow"<<endl;
		return;
	}
	else
	{
		for(int i=0;i<r;i++)
		{
			arr[i]=arr[i+1];
		}
		r--;
	}
	return;
}
void display(int arr[])
{
	if(f==r)
	{
		cout<<"Queue Underflow"<<endl;
		return;
	}
	for(int i=f;i<r;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return;
}
int main() 
{
	//int n;
	cin>>n;
	int arr[n];
	while(1)
	{
		int val,ele;
		cin>>val;
		if(val==1)
		{
			cin>>ele;
			enqueue(arr,ele);
		}
		else if(val==2)
		{
			dequeue(arr);
		}
		else if(val==3)
		{
			display(arr);
		}
		else if(val==-1)
			break;
	}
			
    return 0;
}