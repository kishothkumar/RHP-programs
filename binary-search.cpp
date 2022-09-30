#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int left,int right,int key)
{
    if(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]>key)
            return binarySearch(arr,left,mid-1,key);
        else
            return binarySearch(arr,mid+1,right,key);
    }
    return -1;
}

int main()
{
    int n,ele;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Enter the search element: ";
    cin>>ele;
    int res=binarySearch(arr,0,n-1,ele);
    if(res==-1)
    {
        cout<<"Element not found!";
    }
    else
    {
        cout<<"Element found at the index->"<<res;
    }
}