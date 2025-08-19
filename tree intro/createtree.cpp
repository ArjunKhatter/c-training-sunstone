#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left=NULL;
    Node *right=NULL;
    Node(int val){
        this->data=val;
    }

};
void preorder(Node* root){
    if(root==NULL)
    return ;
    cout << root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    

    
}
int main(){

    // Node* rbu =new Node(10);
    // Node* arjun =new Node(9);
    // Node* shivam =new Node(18);
    // rbu->left=shivam;
    // rbu->right=arjun;
    // cout << rbu->right->data<<endl;

    Node* rbu =new Node(10);
    rbu->right= new Node(9);
    rbu->left=new Node(18);
    rbu->right->right=new Node(100);
    rbu->right->left=new Node(200);
    
    preorder(rbu);
    delete rbu;
    // delete arjun;
    // delete shivam;
    
}