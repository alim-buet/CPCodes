#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void print() {
    for (int i = 0;i < subsets.size();i++) {
        for (int j = 0;j < subsets[i].size();j++) {
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }


}
void generator(vector<int>& subset, int i, vector<int>& v) {
    if (i == v.size()) {
        subsets.push_back(subset);
        return;
    }

    subset.push_back(v[i]);
    generator(subset, i + 1, v);
    subset.pop_back();
    generator(subset, i + 1, v);
}
int main() {
    cout << "How many elements: ";
    int n;
    cin >> n;
    vector<int> v;
    cout << "Enter " << n << " elements: ";
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> subset;
    generator(subset, 0, v);
    print();


    return 0;

}