#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
long long bs(long long sizes[], long long c, int n) {
    long long l = 0, r = sqrt(c);
    long long mid;
    long long ans;
    long long sum = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        sum = 0;

        int flag = 0;
        for (int i = 0;i < n; i++) {
            sum += (2 * mid + sizes[i]) * (2 * mid + sizes[i]);
            if (sum > c) {
                flag = 1;
                sum = 0;
                break;
            }
        }
        if (flag) {
            r = mid - 1;

        }
        else if (sum < c) {
            l = mid + 1;
        }
        else if (sum == c) {

            break;
        }
    }
    return mid;


}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long c;
        cin >> n;
        cin >> c;
        long long sizes[n + 1];
        for (int i = 0;i < n;i++) {
            cin >> sizes[i];
        }
        cout << bs(sizes, c, n) << endl;



    }

    return 0;
}