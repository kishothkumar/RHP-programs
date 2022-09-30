#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void computelps(char *pat,int lps[],int y)
{
    int len=0;
    int i=1;
    lps[0]=0;
    while(i<y)
    {
        if(pat[len]==pat[i])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}

void kmpSearch(char *str,char *pat)
{
    int x=strlen(str);
    int y=strlen(pat);
    int lps[y];
    computelps(pat,lps,y);
    int i=0,j=0,flag=0;
    while((x-i)>=(y-j))
    {
        if(str[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==y)
        {
            cout<<"Pattern found at the index: "<<i-j;
            flag=1;
            j=lps[j-1];
        }
        else if(i<x && str[i]!=pat[j])
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            {
                i++;
            }
        }
    }
    if(!flag)
        cout<<"Element not found!";
}

int main()
{
    char str[100],pat[30];
    scanf("%[^\n]",&str);
    cin>>pat;
    kmpSearch(str,pat);
}