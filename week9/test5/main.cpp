using namespace std;
#include <iostream>

class Person {
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge) {
    if (initialAge < 0) {
        cout << "Age is not valid, setting age to 0.\n";
        this->age = 0;
    }
    else this->age = initialAge;
}

void Person::amIOld() {
    int a = this->age;
    if (a < 0) {
        cout << "Age is not valid, setting age to 0.\n";
    }
    else if (a < 13) {
        cout << "You are young.\n";
    }
    else if (a < 18) { cout << "You are teenager.\n"; }
    else { cout << "You are old.\n"; }
}

void Person::yearPasses() {
    this->age = this->age + 1;

}

int main() {
    int t;
    int age;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        p.yearPasses();
        p.amIOld();

        cout << '\n';
    }

    return 0;
}
