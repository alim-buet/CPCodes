#include<bits/stdc++.h>
using namespace std;
bool isperfectsquare(long long int x) {
    long long int n = sqrt(x);
    return (n * n == x);
}
int isprime(long long int n) {
    int flag = 1;
    int set_of_prime[] = { 2	,3,	5,	7	,11,	13,	17,	19,	23,	29,	31	,37,	41,	43,	47,	53,	59,	61,	67,	71,73,	79,	83,	89,	97,	101,	103,	107	,109,	113,	127,	131,	137,	139	,149	,151	,157,	163,	167	,173,179,	181,	191,	193,	197	,199,	211,	223,	227,	229,	233,	239,	241,	251,	257,	263	,269,	271,	277,	281, 199, 311, 337, 373, 719, 733, 919, 971, 991, 1193, 1931, 3119, 3779, 7793, 7937, 9311, 9377, 11939, 19391, 19937, 37199, 39119, 71993, 91193, 93719, 93911, 99371, 193939, 199933, 319993, 331999, 391939, 393919, 919393, 933199, 939193, 939391, 993319, 999331,283	,293	,307	,311	,313	,317	,331	,337	,347	,349	,353	,359	,367	,373	,379	,383	,389	,397	,401	,409,419,421,431,433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541 };
    for (int i = 0;i < 139;i++) {

        if (n % set_of_prime[i] == 0 && n != set_of_prime[i]) {
            flag = 0;
            break;
        }

    }
    return flag;
}
void solve(long long int x) {
    if (isperfectsquare(x)) {
        if (isprime((int) sqrt(x))) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }


    }
    else {
        cout << "NO" << endl;
    }


}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        if (x == 1 || x == 2 || x == 3) {
            cout << "NO" << endl;
        }
        else {
            solve(x);
        }
    }


    return 0;
}