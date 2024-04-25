#include<iostream>
#include<map>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> a;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        if (k == 1) {
            string b; cin >> b;
            int c; cin >> c;
            a[b] += c;
        }
        else if (k == 2) {
            string b; cin >> b;

            a.erase(b);
        }
        else if (k == 3) {
            string b; cin >> b;

            cout << a[b] << "\n";
        }
    }
    return 0;
}
