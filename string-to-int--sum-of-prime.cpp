#include<iostream>
#include<math.h>
using namespace std;

int num(char *str)
{
    int n=0;
    for(int i=0;str[i];i++)
    {
        n=n*10+(str[i]-48);
    }
    return n;
}

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int sumOfPrime(int n)
{
    int sum=0;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
            sum+=i;
    }
    return sum;
}

int main()
{
    char str[101];
    cin>>str;
    int N = num(str);
    cout<<"The sum of Prime numbers is: "<<sumOfPrime(N);
}