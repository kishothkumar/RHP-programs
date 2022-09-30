#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];                                  //apple
    scanf("%s",str);
    int arr[128]={0};
    for(int i=0;i<strlen(str);i++)
    {
        arr[str[i]]++;
    }
    for(int i=0;i<127;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%c",i);
        }
    }
    for(int i=127;i>=0;i--)
    {
        if(arr[i]%2==0 && arr[i]!=0)
        {
            printf("%c",i);
        }
    }
}