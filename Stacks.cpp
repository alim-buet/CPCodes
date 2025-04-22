#include<iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void push(int x) {

    A[++top] = x;
}
void pop() {
    if (top == -1) {
        cout << "The stack is already empty!!" << endl;
        return;
    }
    cout << A[top] << " is being removed" << endl;
    top--;
}
int topelement() {
    return A[top];
}
void print() {
    cout << "The elements in the stack(from bottom to top): ";
    for (int i = 0;i <= top;i++) {
        cout << A[i] << " ";
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