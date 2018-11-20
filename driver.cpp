
#include <cstdlib>
#include <iostream>
#include "BST312.h"
#include <string>

using namespace std;


int main(){

    BST_312<int>* temp = new BST_312<int>();

    temp->preOrderTraversal();
    temp->postOrderTraversal();
    temp->inOrderTraversal();
    cout << temp->countNodes() << endl;
    cout << "Is 5 in the tree?" << temp->isItemInTree(5) << endl;

    for(int i = 0; i < 100; i = i+2 ){
        temp->insertItem(i);
    }
    for(int i = 1; i < 100; i = i+2 ){
        temp->insertItem(i);
    }
    
    
    cout << temp->countNodes() << endl;

    vector<int> preOrder = temp->preOrderTraversal();

    vector<int>::iterator iter;

    cout << "Pre Order: ";

    for(iter = preOrder.begin(); iter != preOrder.end(); iter++ ){
        cout << *iter << " ";
    }
    cout << endl;

    vector<int> inOrder = temp->inOrderTraversal();

    cout << "In Order: ";

    for(iter = inOrder.begin(); iter != inOrder.end(); iter++ ){
        cout << *iter << " ";
    }
    cout << endl;

    vector<int> postOrder = temp->postOrderTraversal();

    cout << "Post Order: ";

    for(iter = postOrder.begin(); iter != postOrder.end(); iter++ ){
        cout << *iter << " ";
    }
    cout << endl;

    cout << "Is 3 in the tree?" << temp->isItemInTree(3) << endl;
    cout << "Is 8 in the tree?" << temp->isItemInTree(8) << endl;
    cout << "Is 10 in the tree?" << temp->isItemInTree(10) << endl;

    delete temp;







}

