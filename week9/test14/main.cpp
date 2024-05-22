#include <iostream>
#include <string>

using namespace std;

int main() {
    string ss;

    getline(cin, ss);

    try {
        int number = stoi(ss);
        cout << number ;
    } catch (const invalid_argument& e) {
        cout << "Bad String" ;
    }

    return 0;
}
