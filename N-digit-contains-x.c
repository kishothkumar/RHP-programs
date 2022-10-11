#include<stdio.h>
#include<stdlib.h>

int isDigitPres(int num,int x)
{
    while(num>0)
        {
            int rem=num%10;
            if(rem==x)
            {
                return 1;
                break;
            }
            num/=10;
        }
    return 0;
}
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int flag=0; 
    for(int i=1;i<=n;i++)     
    {                         
        if(isDigitPres(i,x))
        {
            printf("%d ",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    return 0;
}