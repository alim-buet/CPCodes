#include<iostream>
#include<string>
using namespace std;
class Students {
public:
    string name;
    int age;
    char gender;
    void printinfo() {
        cout << name << " Age: " << age << " and Gender " << gender << endl;
    }

};

int main() {
    Students group[3];
    cout << "Give the name, age , and gender of 3 students: " << endl;
    for (int i = 0;i < 3;i++) {
        cout << "NO. " << i + 1 << ": ";

        cin >> group[i].name >> group[i].age >> group[i].gender;

    }
    for (int i = 0;i < 3;i++) {
        cout << "Student number " << i + 1 << " is ";
        group[i].printinfo();
    }

    return 0;

}