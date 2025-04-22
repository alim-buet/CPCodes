#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
int allbinarynum[30] = { 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111 };

int isbinarydigit(int n) {

    int isit = 1;
    while (n) {
        if (n % 10 > 1) {
            isit = 0;
            break;
        }
        n /= 10;
    }
    return isit;
}
int check(int n) {
    if (isbinarydigit(n)) return 1;

    for (int i = 0;i < 30;i++) {

        if (n % allbinarynum[i] == 0 && check(n / allbinarynum[i])) return 1;
    }
    return 0;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (isbinarydigit(n)) yes
        else {
            if (check(n)) yes
            else no

        }



    }
    return 0;
}