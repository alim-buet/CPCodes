#include<iostream>
#include<string>
using namespace std;
class AbstractEmployee {
    virtual void AskforPromotion() = 0;

};
class Employee :AbstractEmployee {
private:
    string Name;
    string Company;
    int salary;

public:
    void setname(string nam) {

        Name = nam;
    }
    string getname() {
        return Name;

    }
    void setSalary(int beton) {
        if (salary >= 100000) {
            salary = beton;
        }

    }
    int getSalary() {
        return salary;
    }
    void intro() {
        cout << "Name : " << Name << "Company: " << Company << "Salary :" << salary << endl;

    }
    Employee(string nam, string jayga, int beton) {
        Name = nam;
        Company = jayga;
        salary = beton;
    }
    void AskforPromotion() {
        if (salary >= 100000) {
            cout << Name << " you are rich man!!" << endl;
        }
        else {
            cout << Name << " you poor little fellow!" << endl;
        }

    }
    void work() {
        cout << getname() << " is checking email and coding..." << endl;
    }
};
class developer :public Employee {
public:
    string Language;
    developer(string nam, string jayga, int beton, string bhasha) :Employee(nam, jayga, beton) {

        Language = bhasha;

    }
    void bugfix() {
        cout << getname() << " is fixing bug with " << Language << endl;
    }
    void work() {
        cout << getname() << " is coding like a pro in " << Language << endl;
    }

};
class Teacher : public Employee {
public:
    string subject;
    void PrepareLesson() {
        cout << getname() << " is preparing " << subject << " lesson" << endl;
    }
    Teacher(string nam, string jayga, int beton, string sub) :Employee(nam, jayga, beton) {
        subject = sub;
    }
    void work() {
        cout << getname() << " is trying real hard to be a good teacher..." << endl;
    }

};

int main() {
    Employee kalam = Employee("kalam ", "Google ", 200000);

    developer alim = developer("Alim", "Google", 20, "C++");
    alim.bugfix();
    kalam.intro();
    alim.intro();
    alim.AskforPromotion();
    Teacher modon = Teacher("Modon", "BUET", 100000, "CSE");
    modon.PrepareLesson();
    modon.AskforPromotion();








    return 0;

}