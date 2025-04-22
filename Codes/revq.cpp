#include <bits/stdc++.h>
using namespace std;
void reverseq(queue<int>& q) {
    int el = q.front();
    q.pop();
    if (q.empty()) {
        q.push(el);
        return;
    }
    reverseq(q);
    q.push(el);
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    //print the queue
    reverseq(q);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }



    return 0;
}