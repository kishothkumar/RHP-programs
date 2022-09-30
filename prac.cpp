#include<iostream>
#include<iomanip>
using namespace std;

class cls{
    private:
        int rollno,m1,m2;
        
    public:
    void set(int a,int b,int c)
    {
        rollno = a;
        m1 = b;
        m2 = c;
    }
    double avg()
    {
        return (m1+m2)/2;
    }
};

int main(){
    cls obj[3];
    int a,b,c;
    for(int i=0;i<3;i++)
    {
        cin>>a>>b>>c;
        obj[i].set(a,b,c);
        cout<<fixed<<setprecision(1)<<obj[i].avg()<<endl;
    }
}