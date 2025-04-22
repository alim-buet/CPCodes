#include<iostream>
#include<algorithm>
using namespace std;
int GCD(int a, int b) {
    int maxn, minn;
    maxn = max(a, b);
    minn = min(a, b);
    while (minn != 0) {
        int temp = minn;
        minn = maxn % minn;
        maxn = temp;


    }
    return maxn;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "GCD is " << GCD(a, b) << endl;

    return 0;

}