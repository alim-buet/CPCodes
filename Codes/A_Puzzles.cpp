#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int puzzle[m];
    for (int i = 0;i < m;i++) {
        cin >> puzzle[i];
    }
    sort(puzzle, puzzle + m);
    // for (int i = 0;i < m;i++) {
    //     cout << puzzle[i] << " ";
    // }
    int minans = 10000000;
    for (int i = 0;i <= m - n;i++) {
        minans = min(minans, (puzzle[i + n - 1] - puzzle[i]));
    }
    cout << minans << endl;




    return 0;

}