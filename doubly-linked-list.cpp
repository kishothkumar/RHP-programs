#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};
Node* head=NULL;
Node* tail=NULL;
void insertBegin(int ele)
{
    Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data=ele;
    n->prev=NULL;
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
void insertEnd(int ele)
{
    Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data=ele;
    n->prev=NULL;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        tail=n;
    }
    else
    {
        n->prev=tail;
        tail->next=n;
        tail=n;
    }
}
void insertAfter(int key,int ele)
{
    Node* n = (struct Node*)malloc(sizeof(struct Node));
    Node* temp=head;
    while(temp->data!=key)
    {
        temp=temp->next;
    }
    n->prev=temp;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
}
void insertion()
{
    int c,n,ele,key;
    cout<<"-------->>>..INSERTION..<<<--------"<<endl;
    cout<<"1.Insertion at the beginning of the list"<<endl;
    cout<<"2.Insertion at the end of the list"<<endl;
    cout<<"3.Insert a node after a given node"<<endl;
    cout<<"Enter Your Choice: "<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
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
            cout<<"Enter the key node: ";
            cin>>key;
            cout<<"Enter the element: ";
            cin>>ele;

    }
}
void display()
{
    Node* temp=head;
    cout<<"Elements in the List: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"--------------->>>MENU<<<--------------\n";
        cout<<"1.Insertion in Doubly Linked List.\n";
        cout<<"3.Display the elements in the linked list"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            insertion();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}