#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head=NULL;
Node *tail=NULL;
void insertBegin(int ele)
{
    Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=ele;
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
    Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=ele;
    n->next=head;
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
void insertMid(int key,int ele)
{
    Node* n=(struct Node*)malloc(sizeof(struct Node));
    Node* temp=head;
    n->data=ele;
    if(head==NULL)
    {
        cout<<"List is empty"<<endl<<endl;
        return;
    }
    do{
        if(temp->data==key)
        {
            n->next=temp->next;
            temp->next=n;
            cout<<"Successfully! Elements inserted\n"<<endl<<endl;
            return;
        }
        temp=temp->next;
    }while(temp!=head);
    cout<<"Key element not found\n"<<endl<<endl;

}
void insertion()
{
    int c,n,ele,key;
    cout<<"-------->>>..INSERTION..<<<--------"<<endl;
    cout<<"1.Insertion at the beginning of the list"<<endl;
    cout<<"2.Insertion at the end of the list"<<endl;
    cout<<"3.Insertion in between the nodes:"<<endl;
    cout<<"9.Back"<<endl;
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
            cout<<"Enter the key element: ";
            cin>>key;
            cout<<"Enter the element: ";
            cin>>ele;
            insertMid(key,ele);
            break;
        case 9:
            return;
    }
}
void deleteFirst()
{
    Node* temp=head;
    head=head->next;
    tail->next=head;
    free(temp);
    cout<<"Successfully! Elements deleted\n"<<endl<<endl;
}
void deleteLast()
{
    Node* temp=tail;
    Node* t=head;
    while (t->next!=tail)
    {
        t=t->next;
    }
    tail=t;
    t->next=head;
    free(temp);
    cout<<"Successfully! Elements deleted\n"<<endl<<endl;
}
void deleteMid(int ele)
{
    Node* temp=head;
    if(temp->next=head)
    {
        head=NULL;
        free(temp);
        cout<<"Successfully! Elements deleted\n"<<endl<<endl;
    }
    else if(head!=NULL)
    {
        do{
            if(temp->next->data==ele)
                break;
            temp=temp->next;
        }while(temp!=head);
        Node* t=temp->next;
        temp->next=temp->next->next;
        free(t);
        cout<<"Successfully! Elements deleted\n"<<endl<<endl;
    }
    else
    {
        cout<<"List is empty"<<endl<<endl;
    }
}
void deletion()
{
    int c,ele;
    cout<<"-------->>>..DELETION..<<<--------"<<endl;
    cout<<" 1.Deletion of the first node"<<endl;
    cout<<" 2.Deletion of the last node"<<endl;
    cout<<" 3.Delete any node using element"<<endl;
    cout<<" 9.Back"<<endl;
    cout<<"Enter Your Choice: "<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
            deleteFirst();
            break;
        case 2:
            deleteLast();
            break;
        case 3:
            cout<<"Enter the element: ";
            cin>>ele;
            deleteMid(ele);
            break;
        case 9:
            return;
    }
}
void display()
{
    Node* temp=head;
    if(head!=NULL)
    {
        cout<<"Elements in the List: ";
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
    }
    else
    {
        cout<<"List is Empty";
    }

    cout<<endl;
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"--------->>>..MENU..<<<---------"<<endl;
        cout<<"1.Insertion in the circular singly Linked list"<<endl;
        cout<<"2.Deletion in a circular linked list"<<endl;
        cout<<"3.Display the elements in the linked list"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter Your Choice: "<<endl;
        cin>>ch;
        switch (ch)
        {
            case 0:
                return 0;
            case 1:
                insertion();
                break;
            case 2:
                deletion();
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