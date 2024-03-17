#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long long>v;
    long long a;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        v.push_back(a);
    }
    long long max = v[0];
    for (int i = 0; i < 4; i++) {
        if (max < v[i]) max = v[i];
    }
    cout << max;
    return 0;
}
