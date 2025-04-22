#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        cout << x1 + abs(y1 - y2) << " " << y1 << " " << x1 + abs(y1 - y2) << " " << y2 << endl;
    }
    else if (y1 == y2) {
        cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y1 + abs(x1 - x2) << endl;
    }
    else {
        if (abs(x1 - x2) != abs(y1 - y2)) {
            cout << (-1) << endl;
        }
        else {
            cout << x2 << " " << y1 << " " << x1 << " " << y2 << endl;
        }
    }

    return 0;
}