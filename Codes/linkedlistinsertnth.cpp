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
void insert(int data, int n) { //insert data to nth position
    Node* temp1 = new Node();
    temp1->data = data;
    if (n == 1) {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for (int i = 0;i < n - 2;i++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

}
void print() {
    Node* temp = head;
    cout << "The elements are:  ";
    while (temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    head = NULL;
    insert(7, 1);
    insert(4, 2);
    insert(5, 3);
    cout << "At that moment ";
    print();
    cout << "Enter the data and position to insert a new element: ";
    int da, pos;
    cin >> da >> pos;
    insert(da, pos);
    print();
    return 0;
}