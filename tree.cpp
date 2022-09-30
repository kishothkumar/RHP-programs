#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
//struct Node* root=NULL;
//struct Node* tail=NULL;
void inorder(Node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* insert(int val,Node* root)
{
    if(root==NULL)
    {
        Node *a = (struct Node*)malloc(sizeof(struct Node));
        a->data = val;
        a->left = NULL;
        a->right = NULL;
        return a;
    }
    if(val<root->data)
    {
        root->left=insert(val,root->left);
    }
    else
    {
        root->right=insert(val,root->right);
    }
    return root;
}

Node* minValue(Node* node)
{
    Node* current = node;
    while(current && current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}

Node* deletenode(Node* root,int key)
{
    if(root==NULL)
        return root;
    
    if(key>root->data)
    {
        root->right=deletenode(root->right,key);
    }
    else if(key<root->data)
    {
        root->left=deletenode(root->left,key);
    }
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            return NULL;
        }
        else if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* temp=minValue(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;
}

int main()
{
    int n,val,key;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    Node* root=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        root=insert(val,root);
    }
    cout<<"Enter the element to delete: ";
    cin>>key;
    root = deletenode(root,key);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
}