#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
        for(int j=0;j<n;j++)
        {
            if(arr2[i]==arr1[j])
            {
                arr2[i]='*';
                arr1[j]='*';
                break;
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr1[i]!='*')
        {
            cout<<arr1[i]<<" ";
            sum+=arr1[i];
        }
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        if(arr2[i]!='*')
        {
            cout<<arr2[i]<<" ";
            sum+=arr2[i];
        }
    }
    cout<<"\n";
    cout<<sum;
}