#include <bits/stdc++.h>
using namespace std;
#define yes     cout << "YES" << endl;
#define no      cout << "NO" << endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for (int i = 0; i < n; i++) { cin >> arr[i]; }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi arr(n);
        ll sum = 0;
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        ll alice_sum = arr[0], bob_sum = 0;
        ll prevmove = arr[0];
        int left_pos = 1, right_pos = n - 1;
        int mover = 1; //0-alice 1- bob
        int move_cnt = 1;
        while (left_pos <= right_pos) {
            if ((sum - (alice_sum + bob_sum)) <= prevmove) {
                if (mover == 0) alice_sum += (sum - (alice_sum + bob_sum));
                else bob_sum += sum - (alice_sum + bob_sum);
                move_cnt++;
                break;

            }
            else {
                if (mover == 0) {
                    int tempsum = 0;
                    while (tempsum <= prevmove) {
                        tempsum += arr[left_pos++];
                    }
                    alice_sum += tempsum;
                    prevmove = tempsum;

                }
                else {
                    int tempsum = 0;
                    while (tempsum <= prevmove) {
                        tempsum += arr[right_pos--];
                    }
                    bob_sum += tempsum;
                    prevmove = tempsum;

                }

            }
            mover = 1 - mover;
            move_cnt++;
        }
        cout << move_cnt << " " << alice_sum << " " << bob_sum << endl;



    }
    return 0;
}