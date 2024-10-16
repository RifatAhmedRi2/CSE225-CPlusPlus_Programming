#include<iostream>
//#include<algorithm>//for sorting purpose we'll use it.
using namespace std;

class Node
{
public:
    int info;
    Node* left;
    Node* right;
};

//function for allocation of a new node
Node* newNode(int info)
{
    Node* node = new Node();
    node->info = info;
    node->left = NULL;
    node->right = NULL;

    return node;
}

/* A function that constructs
Binary Search Tree from a sorted array that give minimum height to tree*/
Node* sArraytoBST(int arr[],int start, int end)
{

    if (start > end)
        return NULL;

//according to given problem statement make the middle element as root
    int mid = (start + end)/2;
    Node *root = newNode(arr[mid]);

// Recursively construct the left subtree
    root->left = sArraytoBST(arr, start,mid - 1);

// Recursively construct the right subtree
    root->right = sArraytoBST(arr,mid + 1,end);

    return root;
}


void Print(Node *root)
{
    if (root == NULL)
        return;
    cout<<root->info<<" ";
    Print(root->left);
    Print(root->right);
}


// main function


int main()
{
    int arr[] = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    /* Convert sortedarray of integer to BST */
    Node *root = sArraytoBST(arr, 0, n-1);

    //Printing the tree
    Print(root);
    return 0;
}
