#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string firstName;
    string lastName;
    int standard;
    void in() {
        cin >> age >> firstName >> lastName >> standard;
    }
    void input(int _age, string _firstName, string _lastName, int _standard) {
        age = age;
        firstName = _firstName;
        lastName = _lastName;
        standard = _standard;
    }
    void out() {
        cout << age << " " << firstName << " " << lastName << " " << standard;
    }


};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Student student;
    student.in();
    student.out();
    return 0;
}
