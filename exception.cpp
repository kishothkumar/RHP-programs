#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    try
    {
        if(n<18)
        {
            throw 505;
        }
        cout<<"Eligible to vote";
    }
    catch(int x)
    {
        cout<<"Not eligible to vote";
    }
    
}