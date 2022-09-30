#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[1000];
    fgets(str,1000,stdin);
    char arr[100][30];
    int ind=0,j=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='\t')
        {
            ind++;
            j=0;
        }
        else{
            arr[ind][j]=str[i];
            j++;
        }
    }
    for(int i=0;i<ind;i++)
    {
        for(int j=0;arr[i][j]!='\0';j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}