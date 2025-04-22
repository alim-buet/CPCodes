#include<iostream>

using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* top = NULL; /*Head is now top.. Because if we chose to push or pop element from
                    the end of the linked list it will take O(n) time to traverse all
                    the element and reach the last element. But from definition all the operation
                    of a stack must be O(1).. so we will chose the head as top*/



void push(int x) {
    Node* newnode = new Node();
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void pop() {
    Node* temp;
    if (top == NULL) {
        cout << "The stack is already empty" << endl;
        return;
    }
    temp = top;

    top = top->next;
    free(temp);
}
int topelement() {
    return top->data;
}
void print() {
    Node* temp = top;
    while (top != NULL) {
        cout << top->data << " ";
        top = top->next;

    }
    cout << endl;
}
int main() {
    push(5);
    push(8);
    push(78);
    print();
    pop();
    print();
    cout << "The topmost is " << topelement() << endl;

    return 0;
}