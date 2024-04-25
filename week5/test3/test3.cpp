#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int >a;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int b; cin >> b;
        a.push_back(b);
    }

    int a2;
    cin >> a2;
    a.erase(a.begin() + a2 - 1);
    
    int a3, a4;
    cin >> a3 >> a4;
    a.erase(a.begin() + a3-1, a.begin() + a4-1 );
    cout << a.size() << "\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}
