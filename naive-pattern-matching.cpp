#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

void patternSearch(char *str, char *pattern)
{
    int x=strlen(str);
    int y=strlen(pattern);
    int flag=0;
    for(int i=0;i<=x-y;i++)
    {
        if(str[i]==pattern[0])
        {
            int j;
            for(j=0;j<y;j++)
            {
                if(str[i+j]!=pattern[j])
                    break;
            }
            if(j==y)
            {
                cout<<"Pattern found at the index: "<<i<<endl;
                flag=1;
            }
        }
    }
    if(!flag)
        cout<<"Pattern not found!";
}
int main()
{
    char str[100],pattern[30];
    scanf("%[^\n]",str);
    cin>>pattern;
    patternSearch(str,pattern);
    return 0;
}