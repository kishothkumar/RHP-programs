#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                c++;
                arr[j]=-1;
            }
        }
        if(c%2==1 && arr[i]!=-1)
        {
            cout<<arr[i]<<" ";
        }
    }
}