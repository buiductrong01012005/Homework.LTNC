#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sum(int a, int b, int& c) {
    c = a + b;

}
void tru(int a, int b, int& c) {
    c = abs(a - b);

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    int c = 0;
    sum(n, m, c);
    cout << c;
    cout << "\n";
    tru(n, m, c);
    cout << c;
    return 0;
}
