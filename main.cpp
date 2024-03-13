#include "AVLTree.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    AVLTree tree;
    tree.insert(3);
    tree.insert(5);
    tree.insert(9);
    tree.insert(1);
    tree.insert(0);
    tree.insert(2);
    tree.insert(6);
    tree.insert(10);
    tree.insert(7);
    tree.insert(4);
    tree.insert(8);
    tree.inOrder();
    cout << "====================================" << endl;
    tree.deleteValue(5);
    tree.inOrder();
    cout << "====================================" << endl;
    cout << tree.search(5) << endl << tree.search(10) << endl;
    cout << "====================================" << endl;
}
// Output:
//0 1 2 3 4 5 6 7 8 9 10
//====================================
//0 1 2 3 4 6 7 8 9 10
//====================================
//0
//1
//====================================