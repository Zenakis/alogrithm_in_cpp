//
//  binarytree.cpp
//  alogrithm
//
//  Created by Zen on 02/03/2017.
//  Copyright © 2017 Zen. All rights reserved.
//

#include "binarytree.hpp"

// preorder traversal
void preorder_traversal(Node* p)
{
    if (!p) return;
    std::cout << p->data;    // 先輸出樹根
    preorder_traversal(p->left); // 次輸出左子樹
    preorder_traversal(p->right);// 後輸出右子樹
}

// inorder traversal
void inorder_traversal(Node* p)
{
    if (!p) return;
    inorder_traversal(p->left);
    std::cout << p->data;    // 挪到中間，改變輸出順序。
    inorder_traversal(p->right);
}

// postorder traversal
void postorder_traversal(Node* p)
{
    if (!p) return;
    postorder_traversal(p->left);
    postorder_traversal(p->right);
    std::cout << p->data;    // 挪到後面，改變輸出順序。
}

// level-order traversal
void levelorder_traversal(Node* root)
{
    std::queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front(); q.pop();
        std::cout << p->data;    // 這行往下挪，結果仍相同。
        if (p->left)  q.push(p->left);
        if (p->right) q.push(p->right);
    }
}

//// preorder traversal
//void traversal(Node* root)
//{
//    std::stack<Node*> s;
//    s.push(root);
//    while (!s.empty())
//    {
//        Node* p = s.front(); s.pop();
//        std::cout << p->data;    // 這行往下挪，結果仍相同。
//        if (p->right) s.push(p->right);
//        if (p->left)  s.push(p->left);
//        // 堆疊先進後出、顛倒順序，故先放右小孩、再放左小孩。
//    }
//}
