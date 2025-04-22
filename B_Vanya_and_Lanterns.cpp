#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, l;
    cin >> n >> l;
    int lights[n];


    for (int i = 0;i < n;i++) {
        cin >> lights[i];
    }
    sort(lights, lights + n);
    // if (n == 4 && l == 700 && lights[0] == 0 && lights[1] == 250 && lights[2] == 475 && lights[3] == 700) {
    //     cout << "125.0000000000" << endl;
    // }


    if (n == 2) {
        printf("%.10lf\n", max(((double) (lights[1] - lights[0])) / 2.00, (double) max((double) lights[0], (double) (l - lights[1]))));
    }
    else if (n == 1) {
        printf("%.10lf\n", (double) max(lights[0], l - lights[0]));

    }
    else {
        double minimum = lights[0];

        for (int i = 0;i < n - 1;i++) {

            double d = ((double) (lights[i + 1] - lights[i])) / 2.00;


            minimum = max(minimum, d);

        }
        double result = max(minimum, (double) (l - lights[n - 1]));
        printf("%.10lf\n", result);
    }


    return 0;
}