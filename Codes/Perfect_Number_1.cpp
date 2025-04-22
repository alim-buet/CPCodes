#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        vector<string> perfects;
        perfects.push_back("6");
        perfects.push_back("28");
        perfects.push_back("496");
        perfects.push_back("8128");
        perfects.push_back("33550336");
        perfects.push_back("8589869056");
        perfects.push_back("137438691328");
        perfects.push_back("2305843008139952128");

        int flag = 0;
        for (string num : perfects) {
            if (num.compare(n) == 0) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            cout << "YES, " << n << " is a perfect number!" << endl;
        }
        else {
            cout << "NO, " << n << " is not a perfect number!" << endl;
        }
    }


    return 0;
}