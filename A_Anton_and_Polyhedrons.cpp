#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    char shape[30];
    while (n--) {
        cin >> shape;
        if (strcmp(shape, "Icosahedron") == 0) {
            total += 20;
        }
        else if (strcmp(shape, "Dodecahedron") == 0) {
            total += 12;
        }
        else if (strcmp(shape, "Octahedron") == 0) {
            total += 8;
        }
        else if (strcmp(shape, "Cube") == 0) {
            total += 6;
        }
        else if (strcmp(shape, "Tetrahedron") == 0) {
            total += 4;
        }
    }
    cout << total << endl;

    return 0;

}