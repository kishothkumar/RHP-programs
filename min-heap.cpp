#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int min=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]<arr[min])
    {
        min=left;
    }
    if(right<n && arr[right]<arr[min])
    {
        min=right;
    }
    if(min!=i)
    {
        swap(arr[i],arr[min]);
        heapify(arr,n,min);
    }
}
void buildheap(int arr[],int n)
{
    int start=n/2-1;
    for(int i=0;i<=start;i++)
    {
        heapify(arr,n,i);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    buildheap(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}