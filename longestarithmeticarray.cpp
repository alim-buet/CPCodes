#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int diff, count;
    int maxcount = 1;
    for (int i = 0;i < n - 1;i++) {


        count = 1;


        diff = arr[i + 1] - arr[i];

        for (int j = i + 1;j < n;j++) {

            if ((arr[j] - arr[i]) == diff * (j - i)) {
                count++;
            }
            else {
                i = j - 1;


                break;

            }




        }
        maxcount = max(maxcount, count);




    }
    cout << maxcount << endl;
    return 0;

}