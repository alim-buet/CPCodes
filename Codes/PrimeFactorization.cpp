#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> PrimeFactors;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            PrimeFactors.push_back(i);
            n /= i;
        }

    }
    for (auto el : PrimeFactors) {
        cout << el << " ";
    }
    int ct = 1, sum = 1;
    auto it = PrimeFactors.begin();
    while (it != PrimeFactors.end())
    {
        int currentfactor = *(it);
        int i = count(PrimeFactors.begin(), PrimeFactors.end(), currentfactor);
        ct *= (i + 1);
        sum *= (((int) pow(currentfactor, i + 1)) - 1) / (currentfactor - 1);
        advance(it, i);
    }
    cout << "The number of divisiors of this number is: " << ct << endl;
    cout << "And the sum is : " << sum << endl;




    return 0;
}