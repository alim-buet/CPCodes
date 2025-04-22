#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int nb;
        cin >> nb;
        int b[nb];
        for (int i = 0;i < nb;i++) {
            cin >> b[i];
        }
        int a[2 * nb + 1];
        int ind = 1;
        a[0] = b[0];

        if (is_sorted(b, b + nb)) {
            cout << nb << endl;
            for (int i = 0;i < nb;i++) {
                cout << b[i] << " ";
            }

        }
        else {
            for (int i = 1;i < nb;i++) {
                if (i == nb - 1) {
                    if (b[i] >= b[i - 1]) {
                        a[ind] = b[i];
                        ind++;
                    }
                    else {
                        a[ind] = 1;
                        a[ind + 1] = b[i];
                        ind += 2;
                    }
                    break;
                }
                if (b[i] >= b[i - 1]) {
                    a[ind] = b[i];
                    ind++;
                }
                else {
                    a[ind] = 1;
                    a[ind + 1] = b[i];
                    ind += 2;

                }
            }
            cout << ind << endl;
            for (int i = 0;i < ind;i++) {
                cout << a[i] << " ";


            }

        }
        cout << endl;




    }

    return 0;

}