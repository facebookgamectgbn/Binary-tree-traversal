
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};


Node* Insert(Node* parent,int new_data)
{


   if(parent==NULL)
   {
       Node* current_node = new Node();
       current_node->data=new_data;
       current_node->left=NULL;
       current_node->right=NULL;
       return current_node;
   }
   else if(new_data > parent->data)
   {
       parent->right = Insert(parent->right,new_data);

   }
   else if(new_data < parent->data)
   {
       parent->left = Insert(parent->left,new_data);
   }
    return parent;
}

void print_postorder(Node* node)
{
    if(node==NULL)
        return;
    print_postorder(node->left);
    print_postorder(node->right);
    cout<<node->data<<"  ";
}
void print_preorder(Node* node)
{
    if(node==NULL)
        return;
    cout<<node->data<<"  ";
    print_preorder(node->left);
    print_preorder(node->right);

}
void print_inorder(Node* node)
{
    if(node==NULL)
        return;
    print_inorder(node->left);
    cout<<node->data<<"  ";
    print_inorder(node->right);

}
int main()
{
    Node* root = NULL;
    root = Insert(root,12);
    Insert(root,10);
    Insert(root,37);
    Insert(root,21);
    Insert(root,23);
    Insert(root,22);


    print_preorder(root);
    cout<<endl;
    print_inorder(root);
    cout<<endl;
    print_postorder(root);

}

