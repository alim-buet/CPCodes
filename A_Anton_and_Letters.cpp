#include<iostream>
#include<string>
using namespace std;
int isin(string uniqchar, char ch) {
    int flag = 0;
    int ind = uniqchar.length();


    for (int i = 0;i < ind;i++) {
        if (ch == uniqchar[i]) {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main() {
    string set;
    getline(cin, set);
    string uniqchar;
    int len = set.length();
    if (set.length() < 3) {
        cout << 0 << endl;
    }
    else {

        uniqchar = set[1];
        int index = 1;
        for (int j = 4;j < len;j += 3) {



            if (isin(uniqchar, set[j]) == 0) {
                uniqchar = uniqchar + set[j];

                index++;

            }
        }
        cout << uniqchar.length() << endl;
    }



    return 0;

}