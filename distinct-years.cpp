#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    map<int, int> years;
    char arr[5];
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]) && isdigit(str[i+1]) && isdigit(str[i+2]) && isdigit(str[i+3]))
        {
            for(int j=0;j<5;j++)
            {
                arr[j]=str[i+j];
            }
        }
        int y=atoi(arr);
        years[y]++;
    }
    cout<<"The count of distinct years is: "<<years.size();
}