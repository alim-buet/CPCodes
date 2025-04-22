#include <bits/stdc++.h>
using namespace std;

#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

void solve() {
    int n;
    cin >> n;

    int count = 0;
    string password = "";
    bool is_reached = false;


    while (!is_reached) {
        int option1, option2;
        if (count == n) break;

        cout << "? " << "0" + password << endl;

        cout.flush();
        cin >> option1;


        if (option1) {
            count++;
            password = "0" + password;
        }
        else {

            cout << "? " << "1" + password << endl;
            cout.flush();
            cin >> option2;

            if (option2) {
                password = "1" + password;
                count++;
            }
            else {
                is_reached = true;
                break;
            }
        }
    }


    for (int i = count + 1; i <= n; i++) {
        int option1, option2;


        cout << "? " << password + "0" << endl;
        cout.flush();
        cin >> option1;

        if (option1) {
            password = password + "0";
        }
        else {
            password = password + "1";
        }
    }

    cout << "! " << password << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
