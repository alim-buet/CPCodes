#include<bits/stdc++.h>
using namespace std;

bool ispossible(int bookpages[], int nOfbooks, int nOfstudents, int k) {
    int currentstudent = 1, nowpage = 0;
    for (int i = 0; i < nOfbooks; i++) {
        if ((bookpages[i] + nowpage) > k) {
            currentstudent++;
            nowpage = bookpages[i];
        }
        else {
            nowpage += bookpages[i];
        }
    }
    return (currentstudent <= nOfstudents);  
}

int search(int bookpages[], int nOfbooks, int nOfstudents) {
    int l = *max_element(bookpages, bookpages + nOfbooks);  
    int r = accumulate(bookpages, bookpages + nOfbooks, 0);
    int ans = -1, mid;

    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ispossible(bookpages, nOfbooks, nOfstudents, mid)) {
            r = mid - 1;
            ans = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    int nOfbooks, nOfstudents;
    cin >> nOfbooks >> nOfstudents;
    int bookpages[nOfbooks];
    for (int i = 0; i < nOfbooks; i++) {
        cin >> bookpages[i];
    }
    cout << search(bookpages, nOfbooks, nOfstudents) << endl;

    return 0;
}
