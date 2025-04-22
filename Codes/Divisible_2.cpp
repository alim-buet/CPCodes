#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#include<iostream>
using namespace std;
long long gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    if (a > b)
        return (a / gcd(a, b)) * b;
    else
        return (b / gcd(a, b)) * a;
}


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int c;
        cin >> c;
        long long int losagu = lcm(a, b);
        long long int result = losagu;
        while (result <= c) {
            cout << result << endl;
            result += losagu;
        }
        cout << endl;


    }

    return 0;
}