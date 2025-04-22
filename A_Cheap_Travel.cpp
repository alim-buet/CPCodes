#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    float perspecial = ((float) b) / m;
    if (perspecial >= (float) a) {
        cout << (a * n) << endl;
    }
    else {
       
        int specride = n / m;
        cout << min(((specride + 1) * b), ((specride * b) + (n - specride * m) * a)) << endl;
    }




    return 0;
}