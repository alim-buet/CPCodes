#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
struct Node* head;
struct Node
{
    int data;
    Node* next;
};
void insert(int n) {
    Node* temp = new Node();
    temp->data = n;
    temp->next = head;
    head = temp;
}
void print() {
    Node* temp;
    temp = head;
    cout << "The elements are : ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse() {
    Node* current, * prev, * following;
    current = head;
    prev = NULL;
    while (current != NULL) {
        following = current->next;
        current->next = prev;
        prev = current;
        current = following;
    }
    head = prev;
}

int main() {
    head = NULL;
    insert(4);
    // insert(1);
    // insert(8);
    // insert(78);
    print();
    reverse();
    cout << "After reversal ";
    print();

    return 0;
}