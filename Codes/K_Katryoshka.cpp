#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("katryoshka.in", "rt", stdin);
    int t;
    cin >> t;
    for (int i = 1;i <= t;i++) {
        int eye, mouth, body;
        cin >> eye >> mouth >> body;
        if (body == min(eye, min(body, mouth))) {
            cout << "Case " << i << ": " << body << endl;
        }
        else if (body == max(eye, max(body, mouth)) && mouth == min(eye, min(body, mouth))) {

            cout << "Case " << i << ": " << mouth + (eye - mouth) / 2 << endl;
        }
        else if (((body == max(eye, max(body, mouth))) || (mouth == max(eye, max(body, mouth)))) && eye == min(eye, min(body, mouth))) {
            cout << "Case " << i << ": " << eye << endl;

        }
        else if (eye == max(eye, max(body, mouth)) && mouth == min(eye, min(body, mouth))) {
            int count = mouth;
            body -= mouth;
            eye -= mouth;
            if (eye >= 2 * body) {
                count += body;
            }
            else {
                count += eye / 2;
            }
            cout << "Case " << i << ": " << count << endl;

        }

    }
    return 0;
}