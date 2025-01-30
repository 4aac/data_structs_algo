# include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* left;
    Node* right;
};

struct bstNode 
{
    int data;
    bstNode* left;
    bstNode* right;
};

bstNode* GetNewNode(int data)
{
    bstNode* newNode = new bstNode();  
    //(*newNode).data = data;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
};

bstNode* Insert(bstNode* root, int data);

bstNode* Insert(bstNode* root, int data)
{
    if (root == NULL)  // Empty tree
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
};

int main()
{
    bstNode* root = NULL;  // Creating an empty tree
    Insert(root, 15);
    Insert(root, 10);
    Insert(root, 20);
    Insert(root, 25);
    Insert(root, 8);
    Insert(root, 12);
};
