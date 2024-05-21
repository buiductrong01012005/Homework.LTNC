#include<iostream>
#include<cmath>
using namespace std;

int cnt = 0;

void dem(int n, int m, int x) {
    if (n < 0) return;
    if (n == 0) {
        cnt++;
    }
    for (int i = x; n >= pow(i, m); i++) {
        dem(n - pow(i, m), m, i + 1);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    dem(n, m, 1);
    cout << cnt;
    return 0;
}