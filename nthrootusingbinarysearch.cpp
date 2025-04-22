#include<bits/stdc++.h>
using namespace std;
double multiply(double x, int n) {
    double ans = 1;
    while (n--)
    {

        ans *= x;
    }
    return ans;

}
double epsilon = 1e-10;
int main() {
    double x;
    cin >> x;
    int n;
    cin >> n;
    double lo = 1, hi = x, mid;
    while (hi - lo > epsilon)
    {
        mid = (hi + lo) / 2;
        if (multiply(mid, n) > x) {
            hi = mid;
        }
        else {
            lo = mid;

        }
    }
    cout <<setprecision(10)<< lo << endl;


    return 0;
}