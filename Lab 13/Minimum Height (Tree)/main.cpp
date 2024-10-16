#include<iostream>
#include "binarysearchtree.cpp"
using namespace std;

void treeWithMinimumHeight(TreeType<int> &tree, int array[], int firstIndex, int lastIndex){
    //Setting the mid point as root and inserting it into the tree
    int midPoint = (firstIndex + lastIndex)/2;
    tree.InsertItem(array[midPoint]);

    //Building the left subtree using Recursion
    treeWithMinimumHeight(tree, array, firstIndex, midPoint - 1);

    //Building the right subtree using Recursion
    treeWithMinimumHeight(tree, array, midPoint + 1, lastIndex);
}

int main()
{
    //Creating a tree to take the sequence
    TreeType<int> sequence;
    sequence.InsertItem(11);
    sequence.InsertItem(9);
    sequence.InsertItem(4);
    sequence.InsertItem(2);
    sequence.InsertItem(7);
    sequence.InsertItem(3);
    sequence.InsertItem(17);
    sequence.InsertItem(0);
    sequence.InsertItem(5);
    sequence.InsertItem(1);

    int length = sequence.LengthIs();
    int arr[length];

    //Using IN_ORDER Traversal to Sort the sequence
    sequence.ResetTree (IN_ORDER);
    int i=0;
    bool finish = 0;
    while(!finish){
        int value;
        sequence.GetNextItem(value, IN_ORDER, finish);
        arr[i] = value; //using an array to store the sorted sequence
        i++;
    }

    //Converting the sorted array into a binary search tree
    //that has the minimum height
    TreeType<int> tree;
    treeWithMinimumHeight(tree, arr, 0, length-1);
    tree.Print();

    return 0;
}
