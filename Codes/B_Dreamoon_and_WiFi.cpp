#include<bits/stdc++.h>
using namespace std;
int main() {
    string sent, received;
    cin >> sent >> received;
    int len = sent.length();
    int sentvalue = 0;
    double probability;
    for (int i = 0; i < len; i++)
    {
        if (sent[i] == '+') {
            sentvalue += 1;
        }
        else {
            sentvalue -= 1;
        }
    }
    int recvalue = 0, rem = 0;
    for (int i = 0; i < len; i++)
    {
        if (received[i] == '?') {
            rem++;
        }
        if (received[i] == '+') {
            recvalue += 1;
        }
        else if (received[i] == '-') {
            recvalue -= 1;
        }
    }
    if (rem == 0) {
        if (recvalue == sentvalue) {
            probability = 1.000000000000;
            printf("%.12lf", probability);

        }
        else {
            probability = 0.0000000000000000;
            printf("%.12lf", probability);
        }


    }
    else {
        int remvalue = sentvalue - recvalue;

        int totalposs = (1 << rem);



        vector<int>poss;
        for (int i = 0; i < totalposs; i++)
        {
            int temp = 0;
            for (int j = 0;j < rem;j++) {

                if (((i >> j) & 1) == 0) {
                    temp -= 1;
                }
                else {
                    temp += 1;
                }

            }
            poss.push_back(temp);

        }
        int count = 0;
        for (int el : poss) {

            if (el == remvalue) {
                count++;
            }
        }
        probability = (double) (count) / (double) totalposs;
        printf("%.12lf", probability);



    }


    return 0;
}