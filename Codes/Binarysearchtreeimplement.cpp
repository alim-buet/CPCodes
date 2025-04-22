#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
struct Node* root = NULL;
Node* CreateNode(int data) {
    Node* Newnode = new Node();
    Newnode->data = data;
    Newnode->left = NULL;
    Newnode->right = NULL;

}
void insert(int data) {
    if (root == NULL) {
        root = CreateNode(data);
        return;
    }
    Node* CurrentNode = root;
    while (true) {
        if (data <= CurrentNode->data) {
            if (CurrentNode->left == NULL) {
                CurrentNode->left = CreateNode(data);
                return;
            }
            CurrentNode = CurrentNode->left;
        }
        if (data > CurrentNode->data) {
            if (CurrentNode->right == NULL) {
                CurrentNode->right = CreateNode(data);
                return;
            }
            CurrentNode = CurrentNode->right;
        }
    }

}
void print(Node* temp) {
    if (temp == NULL) {
        cout << endl;
        return;
    }
    print(temp->left);
    cout << temp->data << " ";
    print(temp->right);

}
bool Search(int data) {
    Node* current = root;
    while (current != NULL) {
        if (data == current->data) {
            return true;
        }
        else if (data < current->data) {
            current = current->left;
        }
        else if (data > current->data) {
            current = current->right;
        }
    }
    return false;
}
// Another implementation of search using recursion.
bool Search2(Node* root, int data) {
    if (root == NULL) {
        return false;
    }
    else if (root->data == data) {
        return true;
    }
    else if (data < root->data) {
        Search2(root->left, data);
    }
    else {
        Search2(root->right, data);
    }
}
int min(Node* root) {
    if (root->left == NULL) {
        return root->data;



    }
    min(root->left);

}
int max(Node* root) {
    if (root->right == NULL) {
        return root->data;
    }
    max(root->right);
}
int Findheight(Node* root) {
    if (root == NULL) {
        return -1;
    }
    int LeftHeight = Findheight(root->left);
    int RightHeight = Findheight(root->right);
    return max(LeftHeight, RightHeight) + 1;
}
int main() {
    int n, data;
    cout << "How many numbers are there in your list: ";
    cin >> n;
    while (n--) {
        cout << "Data? : ";
        cin >> data;
        insert(data);
    }
    cout << endl;
    print(root);
    // int x;
    // cout << "\ninput a value: ";
    // cin >> x;
    // if (Search(x)) {
    //     cout << endl << x << " is present in the tree" << endl;
    // }
    // else if (!Search(x)) {
    //     cout << x << " is not in the tree" << endl;
    // }
    // cout << "Input another one: ";
    // cin >> x;
    // if (Search2(root, x)) {
    //     cout << endl << x << " is present in the tree" << endl;
    // }
    // else {
    //     cout << endl << x << " is not present in the tree" << endl;

    // }
    cout << "Max is " << max(root) << endl;
    cout << "Min is " << min(root) << endl;
    cout << "The height of this tree is " << Findheight(root) << endl;
    return 0;
}