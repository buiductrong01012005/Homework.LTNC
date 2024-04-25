#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    
    set<int>a;
    for (int i = 0; i < n; i++) {
        int b, c; cin >> b >> c;
        if (b == 1) {
            a.insert(c);
        }
        else if (b == 2) {
            a.erase(c);
        }
        else if (b == 3 && a.find(b) != a.end()) {
            cout << "Yes" << "\n";
        }
        else if (b == 3 && a.find(c) == a.end()) {
            cout << "No" << "\n";
        }
    }
    return 0;
}
