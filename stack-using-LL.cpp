#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node * next;
};
Node * top = NULL;
bool isEmpty()
{
    if(top==NULL)
        return true;
    else
        return false;
}
void push(int num)
{
    Node * n = (struct Node*)malloc(sizeof(struct Node));
    n->data=num;
    n->next=NULL;
    if(top==NULL)
    {
        top=n;
    }
    else
    {
        n->next=top;
        top=n;
    }
}
void pop()
{
    Node* temp=top;
    top = top->next;
    free(temp);
    cout<<"Element successfully deleted!"<<endl<<endl;
}
void display()
{
    cout<<"Elements in the stack:"<<endl;
    Node* temp;
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
int peek()
{
    return top->data;
}
int secondmin()
{
    int min=INT_MAX,smin=INT_MAX;
    Node* temp=top;
    while(temp!=NULL)
    {
        if(temp->data<min)
        {
            smin=min;
            min=temp->data;
        }
        else if(temp->data < smin && temp->data!=min)
        {
            smin=temp->data;
        }
        temp=temp->next;
    }
    return smin;
}
int main()
{
    int ch,ele,n;
    while(1)
    {
        cout<<"-------->>..MENU..<<---------"<<endl;
        cout<<" 1.Push"<<endl;
        cout<<" 2.Pop"<<endl;
        cout<<" 3.Display"<<endl;
        cout<<" 4.IsEmpty"<<endl;
        cout<<" 5.Peek"<<endl;
        cout<<" 6.Exit"<<endl;
        cout<<" 7.second minimum"<<endl;
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
                    push(ele);
                }
                cout<<"Elements pushed Successfully!\n"<<endl<<endl;
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<(isEmpty()?"stack is Empty":"stack is non empty")<<endl;
                break;
            case 5:
                cout<<"Top Element in the stack is: "<<peek()<<endl;
                break;
            case 6:
                return 0;
            case 7:
                cout<<"The second minimum element in the stack is: "<<secondmin()<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
                break;
        }
    }
    return 0;
}