#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* CreateNode(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* insert(Node* root, int data) {
    if (root == NULL) {
        root = CreateNode(data);
    }
    else if (root->data >= data) {
        root = insert(root->left, data);
    }
    else {
        root = insert(root->right, data);
    }
    return root;
}

void print(Node* head) {
    if (head == NULL) {
        return;
    }
    print(head->left);
    cout << head->data << " ";
    print(head->right);


}
Node* head = NULL;


int main() {
    Node* root = NULL;

    root = insert(root, 15);
    head = root;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 12);
    root = insert(root, 8);
    print(head);


    return 0;
}