#include<iostream>
using namespace std;
class kk{
    public:
    void sk(int a)
    {
        cout<<'a';
    } 
};
class dk : public kk{
    public:
    void sk(int b)
    {
        cout<<'b';
    }
};
int main()
{
    dk ka;
    ka.sk(10);
    ka.sk(20);
    return 0;
}