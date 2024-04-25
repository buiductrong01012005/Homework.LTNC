#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
private:
    int age;
    string firstName;
    string lastName;
    int standard;
public:
    int get_age() {
        return age;
    }
    void set_age(int n) {
        age = n;
    }
    string get_first_name() {
        return firstName;
    }
    void set_first_name(string n) {
        firstName = n;
    }
    string get_last_name() {
        return lastName;
    }
    void set_last_name(string n) {
        lastName = n;
    }
    int get_standard() {
        return standard;
    }
    void set_standard(int n) {
        standard = n;
    }
    void present1() {
        cout << age << "\n" << firstName << "," << lastName << "\n" << standard;
    }
    void present2() {
        cout << age << "," << firstName << "," << lastName << "," << standard;
    }
};

int main() {
    Student student;
    int age, standard;
    string first, last;
    cin >> age >> first >> last >> standard;
    student.set_age(age);
    student.set_first_name(first); student.set_last_name(last); student.set_standard(standard);
    cout << student.get_age() << "\n" << student.get_last_name() << ", " << student.get_first_name() << "\n" << student.get_standard() << "\n";
    cout << endl;
    cout << student.get_age() << "," << student.get_first_name() << "," << student.get_last_name() << "," << student.get_standard();

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
