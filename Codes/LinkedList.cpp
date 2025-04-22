#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
struct Node* head;
struct Node
{
    int data;
    Node* Next;
};
void insert(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->Next = head;

    head = temp;


}
void print() {
    Node* temp = head;
    cout << "The list is : ";
    while (temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->Next;
    }
    cout << endl;
}



int main() {
    head = NULL;
    cout << "How many numbers: ";
    int n, i, x;
    cin >> n;
    for (i = 0;i < n;i++) {
        cin >> x;
        insert(x);
        print();
    }

    return 0;
}