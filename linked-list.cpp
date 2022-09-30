#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node * next;
};
Node * head = NULL,*tail = NULL;
int len()
{
    int c=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
void insertBegin(int num)
{
    Node * n = (struct Node*)malloc(sizeof(struct Node));
    n->data=num;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        tail=n;
    }
    else
    {
        n->next=head;
        head=n;
    }
}
void insertEnd(int num)
{
    Node * n = (struct Node*)malloc(sizeof(struct Node));
    n->data=num;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        tail=n;
    }
    else
    {
        tail->next=n;
        tail=n;
    }
}
void insertMid(int num,int pos)
{
    int l=len();
    Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data=num;
    n->next=NULL;
    Node* temp=head;
    if(head==NULL)
    {
        head=n;
        tail=n;
        cout<<"Successfully! Elements inserted\n"<<endl;
    }
    else if(pos<1 || pos>l)
    {
        cout<<"Invalid Position!!!"<<endl<<endl;
    }
    else
    {
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
        cout<<"Successfully! Elements inserted\n"<<endl<<endl;
    }
}
void deleteBegin()
{
    Node* temp=head;
    head = head->next;
    free(temp);
    cout<<"Element successfully deleted!"<<endl<<endl;
}
void deleteEnd()
{
    Node* temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    cout<<"Element successfully deleted!"<<endl<<endl;
}
void deleteMid(int pos)
{
    Node* temp=head;
    Node* t;
    if(pos<1 || pos>len())
    {
        cout<<"Invalid Position!"<<endl<<endl;
        return;
    }
    else
    {
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        t=temp->next;
        temp->next=t->next;
        free(t);
        cout<<"Element successfully deleted!"<<endl<<endl;
    }
}
void display()
{
    cout<<"Elements in the list:"<<endl;
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

int main()
{
    int n,ele,pos;
    while(1)
    {
        int ch;
        cout<<"--------------->>>MENU<<<--------------\n"; 
        cout<<" 1.Insert the elements in the beginning.\n";
        cout<<" 2.Insert the elements in the end.\n";
        cout<<" 3.Insert the elements in the middle\n";
        cout<<" 4.Display the elements.\n";
        cout<<" 5.Length.\n";
        cout<<" 6.Delete at the beginning.\n";
        cout<<" 7.Delete at the end.\n";
        cout<<" 8.Delete at the middle.\n";
        cout<<" 9.Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            //int n,ele;
            cout<<"Enter the number of elements you want to insert: ";
            cin>>n;
            cout<<"Enter the elements:"<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>ele;
                insertBegin(ele);
            }
            cout<<"Successfully! Elements inserted\n"<<endl<<endl;
            break;
        case 2:
            //int n,ele;
            cout<<"Enter the number of elements you want to insert: ";
            cin>>n;
            cout<<"Enter the elements:"<<endl;
            for(int i=0;i<n;i++)
            {
                cin>>ele;
                insertEnd(ele);
            }
            cout<<"Successfully! Elements inserted\n"<<endl<<endl;
            break;
        case 3:
            cout<<"The element: ";
            cin>>ele;
            cout<<"Enter position where you want to insert: ";
            cin>>pos;
            insertMid(ele,pos);
            break;
        case 4:
            display();
            break;
        case 5:
            cout<<"The length of the string is: "<<len()<<endl<<endl;
            break;
        case 6:
            deleteBegin();
            break;
        case 7:
            deleteEnd();
            break;
        case 8:
            cout<<"Enter position where you want to delete: ";
            cin>>pos;
            deleteMid(pos);
            break;
        case 9:
            return 0;
        default:
            cout<<"Invalid Input! Please enter a valid input"<<endl<<endl;
            break;
        }
    }
}
