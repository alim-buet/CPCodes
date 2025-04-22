#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;

};
struct Node* head;
void InsertAtHead(int x) {   //insert new node at the begining
    Node* temp = new Node();
    temp->data = x;
    if (head == NULL) {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;


}
void InsertAtTail(int x) {
    Node* temp = new Node();
    Node* lastaddress;
    lastaddress = head;
    while (lastaddress->next != NULL) {
        lastaddress = lastaddress->next;
    }
    temp->data = x;
    lastaddress->next = temp;
    temp->next = NULL;
    temp->prev = lastaddress;

}
void ForwardPrint() {
    Node* current = head;
    cout << "Element in forward order:  ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;

    }
    cout << endl;
}
void ReversePrint() {
    Node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    cout << "The elements in reverse order are: ";
    while (last != NULL) {
        cout << last->data << " ";
        last = last->prev;
    }

}


int main() {
    head = NULL;
    InsertAtHead(5);
    InsertAtHead(9);
    InsertAtHead(3);
    ForwardPrint();
    InsertAtTail(78);
    ForwardPrint();
    ReversePrint();


    return 0;
}