#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string str(m, 'B');
        while (n--)
        {
            int i;
            cin >> i;
            
            if (str[i - 1] == 'B' && str[m - i] == 'B') {
                int mini = min(i-1,m-i);
                str[mini]='A';
            }
            else if (str[i - 1] == 'B') {
                str[i-1] = 'A';
            }
            else if (str[m - i] == 'B'){
                str[m-i]='A';
            }
           

        }
        cout << str << endl;


    }

    return 0;
}