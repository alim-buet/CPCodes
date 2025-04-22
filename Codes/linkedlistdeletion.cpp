#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
struct Node* head;
struct Node {
    int data;
    Node* next;
};
void remove(int n) {

    Node* temp1 = head;
    Node* temp2 = head;
    Node* temp3 = head;
    int count = 0;
    while (temp2 != NULL) {
        count++;
        temp2 = temp2->next;
    }
    if (n == 1) {
        head = temp1->next;
        return;
    }

    else if (n == count) {
        cout << "The last element is deleted.." << endl;

        for (int i = 0;i < n - 2;i++) {
            temp3 = temp3->next;
        }
        temp3->next = NULL;
        return;
    }

    for (int i = 0;i < n - 2;i++) {
        temp1 = temp1->next;

    }
    for (int i = 0;i < n;i++) {
        temp3 = temp3->next;

    }
    temp1->next = temp3;

}
void insert(int n) {
    Node* temp = new Node();
    temp->data = n;
    temp->next = head;
    head = temp;
}
void print() {
    Node* tempnode;
    tempnode = head;
    cout << "Elements are: ";
    while (tempnode != NULL) {
        cout << tempnode->data << "  ";
        tempnode = tempnode->next;
    }
    cout << endl;
}
int main() {
    insert(5);
    insert(3);
    insert(7);
    insert(22);
    print();
    remove(4);
    print();


    return 0;
}