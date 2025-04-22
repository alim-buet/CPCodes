#include<bits/stdc++.h>
using namespace std;
int main() {
    int distance[3];
    cin >> distance[0] >> distance[1] >> distance[2];
    sort(distance, distance + 3);
    cout << (distance[1] - distance[0] + distance[2] - distance[1]) << endl;
    return 0;
}