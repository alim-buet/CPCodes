#include<bits/stdc++.h>
using namespace std;
#define yes     cout<<"YES"<<endl;
#define no      cout<<"NO"<<endl;
#define vi      vector<int>
#define ll      long long
#define vl      vector<long long>
#define fori    for(int i=0;i<n;i++){cin>>arr[i]};
int main() {
    int t;
    cin >> t;
    while (t--) {


        ll n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        vl pos(n + 4);
        vl arr(n + 4);

        for (int i = 1;i <= n;i++) {
            cin >> pos[i];
        }
        ll maxscore = -1;
        ll maxscorepos;

        for (int i = 1;i <= n;i++) {
            cin >> arr[i];
            if (arr[i] > maxscore) {
                maxscore = arr[i];
                maxscorepos = i;
            }
        }

        //loop until reaching maxscore;
        ll moveremforbod = k;
        ll moveremfors = k;
        ll maxforbod = -1;
        ll maxfors = -1;
        ll gainedscore = 0;
        for (ll i = 1;i <= k;i++) {
            //cout << "Now gained score is " << gainedscore << " pb = " << pb << " " << endl;
            if (arr[pb] == maxscore) {
                maxforbod = max(maxforbod, (gainedscore + (moveremforbod) *arr[pb]));

                //cout << "maxreacher .. maxscore from here is " << (gainedscore + (moveremforbod) *arr[pb]) << endl;
                break;
            }
            if (pb == pos[pb]) {
                maxforbod = max(maxforbod, (gainedscore + (moveremforbod) *arr[pb]));
                break;
            }
            if (pb == pos[pos[pb]]) {
                if (arr[pb] > arr[pos[pb]]) {
                    maxforbod = max(maxforbod, (gainedscore + moveremforbod * arr[pb]));
                }
                else {
                    maxforbod = max(maxforbod, gainedscore + moveremforbod * arr[pos[pb]]);
                }
                break;
            }
            else {
                maxforbod = max(maxforbod, (gainedscore + arr[pb] * moveremforbod));
                // cout << "maxscore form hres is " << (gainedscore + (moveremforbod) *arr[pb]) << endl;
                gainedscore += arr[pb];
                pb = pos[pb];
            }
            moveremforbod--;
        }
        gainedscore = 0;
        //cout << "For shahsa" << endl;
        for (ll i = 1;i <= k;i++) {
            //cout << "Now gained score is " << gainedscore << " ps = " << ps << " " << endl;

            if (arr[ps] == maxscore) {
                maxfors = max(maxfors, (gainedscore + (moveremfors) *arr[ps]));
                //cout << "maxreacher .. maxscore from here is " << (gainedscore + (moveremfors) *arr[ps]) << endl;


                break;
            }
            if (ps == pos[ps]) {
                maxfors = max(maxfors, (gainedscore + (moveremfors) *arr[ps]));
                break;
            }
            if (ps == pos[pos[ps]]) {
                if (arr[ps] > arr[pos[ps]]) {
                    maxfors = max(maxfors, (gainedscore + moveremfors * arr[ps]));
                }
                else {
                    maxfors = max(maxfors, gainedscore + moveremfors * arr[pos[ps]]);
                }
                break;
            }
            else {
                maxfors = max(maxfors, (gainedscore + arr[ps] * moveremfors));
                //cout << " maxscore from here is " << (gainedscore + (moveremfors) *arr[ps]) << endl;

                gainedscore += arr[ps];
                ps = pos[ps];
            }
            moveremfors--;
        }



        if (maxforbod > maxfors) cout << "Bodya" << endl;
        else if (maxforbod < maxfors) cout << "Sasha" << endl;
        else cout << "Draw" << endl;
    }
    return 0;
}