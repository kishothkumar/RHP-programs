#include<iostream>
using namespace std;
int top=-1;

bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}
void push(int stack[],int ele,int n)
{
    if(top==n-1)
    {
        cout<<"stack Overflow!!!"<<endl;
    }
    else
    {
        stack[++top]=ele;
    }
}
void pop(int stack[])
{
    if(isEmpty())
    {
        cout<<"stack Underflow!!!"<<endl;
    }
    else
    {
        top = top-1;
        cout<<"Successfully! Element popped from the stack"<<endl;
    }
}
void display(int stack[])
{
    int temp=0;
    if(isEmpty())
    {
        cout<<"stack Underflow!!!"<<endl;
    }
    else
    {
        while(temp!=top+1)
        {
            cout<<stack[temp++]<<" ";
        }
        cout<<endl;
    }
}
int Size(int stack[])
{
    return top+1;
}
int topElement(int stack[])
{
    return stack[top];
}
int main()
{
    int ch,ele,s,n;
    cout<<"Enter the size of the stack: ";
    cin>>s;
    int stack[s];
    while(1)
    {
        cout<<"-------->>..MENU..<<---------"<<endl;
        cout<<" 1.Push"<<endl;
        cout<<" 2.Pop"<<endl;
        cout<<" 3.Display"<<endl;
        cout<<" 4.IsEmpty"<<endl;
        cout<<" 5.Size"<<endl;
        cout<<" 6.TopElement"<<endl;
        cout<<" 7.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the number of elements you want to push: ";
                cin>>n;
                cout<<"Enter the elements:"<<endl;
                for(int i=0;i<n;i++)
                {
                    cin>>ele;
                    push(stack,ele,s);
                }
                //cout<<"Elements pushed Successfully!\n"<<endl<<endl;
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                cout<<(isEmpty()?"stack is Empty":"stack is non empty")<<endl;
                break;
            case 5:
                cout<<"The size of the stack is: "<<Size(stack)<<endl;
                break;
            case 6:
                cout<<"Top Element in the stack is: "<<topElement(stack)<<endl;
                break;
            case 7:
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;
                break;
        }
    }
    return 0;
}