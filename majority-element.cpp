// Moore’s Voting AlgorithmS

#include <iostream>
using namespace std;

int findele(int arr[],int size)
{
  int maxind=0,c=1;
  for(int i=1;i<size;i++)
  {
    if(arr[maxind]==arr[i])
      c++;
   	else
      c--;
    if(c==0)
    {
      maxind=i;
      c=1;
    }
  }
  return arr[maxind];
}

bool isMajority(int arr[],int ele,int size)
{
  int c=0;
  for(int i=0;i<size;i++)
  {
    if(arr[i]==ele)
    {
      c++;
    }
  }
  if(c>size/2)
    return 1;
  else
    return 0;
}
int main() 
{
    int size;
    cin>>size;
    int arr[size];
    for(int j=0;j<size;j++)
    {
      cin>>arr[j];
    }
    int ele=findele(arr,size);
    if(isMajority(arr,ele,size))
      cout<<ele;
    else
      cout<<"-1";
}