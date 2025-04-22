#include<iostream>
#include<stack>

using namespace std;
stack<struct Node*> stk;
struct Node
{
    int data;
    Node* next;
};
struct Node* head = NULL;
void insert(int x) {
    Node* newnode = new Node();
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}
void print() {
    Node* temp = head;
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void reverse() {
    Node* temp = head;
    while (temp != NULL) {
        stk.push(temp);
        temp = temp->next;
    }
    temp = stk.top();
    head = temp;
    stk.pop();
    while (!stk.empty()) {
        temp->next = stk.top();
        stk.pop();
        temp = temp->next;
    }
    temp->next = NULL;

}

int main() {
    insert(4);
    insert(8);
    insert(1);
    print();
    reverse();
    print();

    return 0;
}