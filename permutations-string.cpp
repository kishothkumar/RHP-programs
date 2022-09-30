#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void permute(string str,int l,int r)
{
    if(l==r)
    {
        cout<<str<<endl;
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(str[i],str[l]);    //swapping
            permute(str,l+1,r);     //recursion;
            swap(str[l],str[i]);    //backtracking
        }
    }
}
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    permute(str,0,l-1);
    return 0;
}