#include<iostream>
using namespace std;
#define N 4
void printSolution(int mat[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(int mat[N][N],int row,int col)
{
    int i,j;
    for(int i=0;i<col;i++)
    {
        if(mat[row][i]==1)
        {
            return false;
        }
    }

    for(i=row,j=col; i>=0 && j>=0 ; i--,j--)
    {
        if(mat[i][j]==1)
        {
            return false;
        }
    }

    for(i=row,j=col; i<N && j>=0 ; i++,j--)
    {
        if(mat[i][j]==1)
        {
            return false;
        }
    }

    return true;
}

bool isNQueen(int mat[N][N], int col)
{
    if(col>=N)
        return true;
    
    for(int i=0;i<N;i++)
    {
        if(isSafe(mat,i,col))
        {
            mat[i][col]=1;
            if(isNQueen(mat,col+1))
                return true;
            mat[i][col]=0;
        }
    }
    return false;
} 

bool solveQueen()
{
    int mat[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            mat[i][j]=0;
    
    if(isNQueen(mat,0)==false)
    {
        cout<<"The solution does not exist";
    }
    printSolution(mat);
    return true;
}

int main()
{
    solveQueen();
    return 0;
}