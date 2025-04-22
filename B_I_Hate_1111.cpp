#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }
#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define ll      long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        bool isPossible = false;

        
        for (int i = 0; i * 111 <= n; i++) {
            if ((n - i * 111) % 11 == 0) {
                isPossible = true;
                break;
            }
        }

      
        if (isPossible) yes
        else no
    }
    return 0;
}
