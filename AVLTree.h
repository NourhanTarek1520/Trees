//
// Created by Norhan Tarek on 13/08/2022.
//

#ifndef _AVLTREE_AVLTREE_H
#define _AVLTREE_AVLTREE_H

class AVLTree {
private:
    struct binaryNode{
        int data {};
        int height {};
        binaryNode* left {};
        binaryNode* right {};

        binaryNode(int dt) : data(dt) {}

        int childHeight(binaryNode* node);
        int updateHeight();
        int balanceFactor();
    };
    binaryNode* root { }; // Root of the avl tree.

    binaryNode* rightRotation(binaryNode* rootNode);
    binaryNode* leftRotation(binaryNode* rootNode);
    binaryNode* balance(binaryNode* node);
    binaryNode* insertNode(int value, binaryNode* node);
    binaryNode* deleteNode(int value, binaryNode* node);
    bool search(int value, binaryNode* node);
    void inOrder(binaryNode *rootNode);

public:
    void insert(int value);
    void deleteValue(int value);
    bool search(int value);
    void inOrder();
};
#endif //_AVLTREE_AVLTREE_H
